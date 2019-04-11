Data.places
|> List.map(({name}: Data.place) => name)
|> Array.of_list
|> Js.log;

"i" |> Data.search |> Array.of_list |> Js.log;

ReactDOMRe.renderToElementWithId(<TileList />, "app");