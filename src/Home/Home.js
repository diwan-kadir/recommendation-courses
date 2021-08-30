import { useState } from "react";
import List from "../components/List";
import ListItem from "../components/ListItem";
import "../searchBar/searchBar";
import SearchBar from "../searchBar/searchBar";

function Home() {
  const [data, setData] = useState([[], []]);

  return (
    <>
      <SearchBar data={data} setData={setData} />
      <List>
        {data[0].map((subData) => (
          <ListItem text={subData} key={subData} />
        ))}
      </List>
      <List>
        {data[1].map((subData) => (
          <ListItem text={subData} key={subData} />
        ))}
      </List>
    </>
  );
}

export default Home;
