function inOrderPrint(root) {
  if (root != null) {
    inOrderPrint(root.left);
    console.log(root.data);
    inOrderPrint(root.right);
  }
}
