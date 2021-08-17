# yummyandroidlib

In your Xcode project, select File > Swift Packages > Add Package Dependencies
Then enter this git repository url and select this swiftpackage branch in the rules page of swift package manager.

### Example Usage

```
//  RecipeListViewModel.swift
//  Yummy
//
//  Created by Ronillo Ang on 8/3/21.
//  Copyright © 2021 Ronillo Ang. All rights reserved.
//

import Foundation
import MultiYummyFramework

class RecipeListViewModel : ObservableObject {
    
    private let api = Api(rapidApiKey: "") // TODO: add your rapid api key here
    private let command: Command
    @Published var resource: Resource<Recipes>? = .loading

    init() {
        command = GetRecipeListCommand(api: api, timeout: 10000)
    }

    func fetchPopularRecipes(pageStart: Int32) {
        let command = self.command as? GetRecipeListCommand
        command?.getRecipes(pageStart: pageStart, tag: "list.recipe.popular",
                            completionHandler: { (recipes, error) in
            if let recipes = recipes {
                self.resource = Resource.success(recipes)
            } else if error != nil {
                self.resource = Resource.error(error!)
            }
        })
    }

    // get tag from category api. see MultiYummyFramework.GetCategoryListCommand
    func fetchRecipesByTag(pageStart: Int32, tag: String) {
        let command = self.command as? GetRecipeListCommand
        command?.getRecipes(pageStart: pageStart, tag: tag,
                            completionHandler: { (recipes, error) in
            if let recipes = recipes {
                self.resource = Resource.success(recipes)
            } else if error != nil {
                self.resource = Resource.error(error!)
            }
        })
    }
}
```
