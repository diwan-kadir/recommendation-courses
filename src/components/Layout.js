import classes from "./Layout.module.css";

function Layout(props) {
  return <section className={classes.listbox}>{props.children}</section>;
}
export default Layout;
