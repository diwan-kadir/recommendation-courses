import Layout from "./Layout";
import classes from "./List.module.css";

function List(props) {
  return (
    <Layout>
      <ul className={classes.list}>{props.children}</ul>
    </Layout>
  );
}

export default List;
