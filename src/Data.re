type image = {
  url: string,
  attribution: string,
  attributionUrl: option(string),
};

type coordinates = {
  latitude: float,
  longitude: float,
};

type place = {
  id: string,
  name: string,
  description: string,
  image,
  phone: option(string),
  email: option(string),
  address: string,
  coordinates,
};

let places = [
  {
    id: "3c84a93a-5c79-4326-afb5-8490acd263cb",
    name: "Big Ben",
    description: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus in dui sit amet tellus ullamcorper gravida. Nam sit amet finibus nulla. Nunc fringilla hendrerit erat, ut gravida lectus tempor nec. Proin dapibus imperdiet leo, eu sagittis orci tristique id. Cras porttitor lorem hendrerit pretium ultricies. Cras eu eros eget eros lacinia eleifend ac non tellus. Integer rhoncus at quam in cursus. Integer volutpat arcu nec mi suscipit tristique. Phasellus fermentum felis lorem, eget vestibulum arcu ullamcorper at. Sed vel egestas quam.",
    image: {
      url: "https://images.unsplash.com/photo-1551484238-a18df9ce70b1?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=934&q=80",
      attribution: "Guilherme Stecanella",
      attributionUrl: Some("https://unsplash.com/@guilhermestecanella"),
    },
    phone: None,
    email: None,
    address: "London, England",
    coordinates: {
      latitude: 51.510357,
      longitude: (-0.116773),
    },
  },
  {
    id: "bc471948-8a96-4e7c-9bb5-9a8fb8f7f4de",
    name: "Hotel Russel",
    description: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus in dui sit amet tellus ullamcorper gravida. Nam sit amet finibus nulla. Nunc fringilla hendrerit erat, ut gravida lectus tempor nec. Proin dapibus imperdiet leo, eu sagittis orci tristique id. Cras porttitor lorem hendrerit pretium ultricies. Cras eu eros eget eros lacinia eleifend ac non tellus. Integer rhoncus at quam in cursus. Integer volutpat arcu nec mi suscipit tristique. Phasellus fermentum felis lorem, eget vestibulum arcu ullamcorper at. Sed vel egestas quam.",
    image: {
      url: "https://images.unsplash.com/photo-1551485327-216cdc03b582?ixlib=rb-1.2.1&auto=format&fit=crop&w=934&q=80",
      attribution: "Guilherme Stecanella",
      attributionUrl: Some("https://unsplash.com/@guilhermestecanella"),
    },
    phone: None,
    email: Some("example@test.com"),
    address: "London, England",
    coordinates: {
      latitude: 51.510357,
      longitude: (-0.116773),
    },
  },
  {
    id: "f049289d-0341-455f-8018-f90b185dd6d3",
    name: "Insomnia city",
    description: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus in dui sit amet tellus ullamcorper gravida. Nam sit amet finibus nulla. Nunc fringilla hendrerit erat, ut gravida lectus tempor nec. Proin dapibus imperdiet leo, eu sagittis orci tristique id. Cras porttitor lorem hendrerit pretium ultricies. Cras eu eros eget eros lacinia eleifend ac non tellus. Integer rhoncus at quam in cursus. Integer volutpat arcu nec mi suscipit tristique. Phasellus fermentum felis lorem, eget vestibulum arcu ullamcorper at. Sed vel egestas quam.",
    image: {
      url: "https://images.unsplash.com/photo-1544733247-4166525e2ae2?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=1913&q=80",
      attribution: "Guilherme Stecanella",
      attributionUrl: Some("https://unsplash.com/@guilhermestecanella"),
    },
    phone: Some("+11 111 111 111"),
    email: Some("test@example.com"),
    address: {j|Maringá, Brazil|j},
    coordinates: {
      latitude: (-23.4),
      longitude: (-51.916667),
    },
  },
];

let search = searchTerm =>
  places
  |> List.filter(({name}) =>
       name |> Js.String.toLowerCase |> Js.String.includes(searchTerm)
     );