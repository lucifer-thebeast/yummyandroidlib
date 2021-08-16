# yummyandroidlib

In your Xcode project, select File > Swift Packages > Add Package Dependencies
Then enter this git repository url and select this swiftpackage branch in the rules page of swift package manager.

### Example Usage

//
//  RecipeListViewModel.swift
//  Yummy
//
//  Created by Ronillo Ang on 8/3/21.
//  Copyright © 2021 Ronillo Ang. All rights reserved.
//

import Foundation
import MultiYummyFramework

class RecipeListViewModel : ObservableObject {
    
    @Published var resource: Resource<Recipes>? = .loading

    func fetchPopularRecipes() {
        let api = Api(rapidApiKey: "") // TODO: add your rapid api key here
        let command = GetRecipeListCommand(api: api)
        command.getRecipes(pageStart: 1, completionHandler: { (recipes, error) in
            if let recipes = recipes {
                self.resource = Resource.success(recipes)
            } else if error != nil {
                self.resource = Resource.error(error!)
            }
        })
    }
}

