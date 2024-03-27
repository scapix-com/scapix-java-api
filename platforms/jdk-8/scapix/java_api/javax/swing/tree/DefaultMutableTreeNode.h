// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/javax/swing/tree/MutableTreeNode.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTMUTABLETREENODE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTMUTABLETREENODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::tree { class DefaultMutableTreeNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::tree::DefaultMutableTreeNode>
{
	static constexpr fixed_string class_name = "javax/swing/tree/DefaultMutableTreeNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::javax::swing::tree::MutableTreeNode, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTMUTABLETREENODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTMUTABLETREENODE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTMUTABLETREENODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/javax/swing/tree/TreeNode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::tree::DefaultMutableTreeNode : public jni::object_base<"javax/swing/tree/DefaultMutableTreeNode",
	java::lang::Object,
	java::lang::Cloneable,
	javax::swing::tree::MutableTreeNode,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::Enumeration> EMPTY_ENUMERATION() { return get_static_field<"EMPTY_ENUMERATION", jni::ref<java::util::Enumeration>>(); }

	static jni::ref<javax::swing::tree::DefaultMutableTreeNode> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::tree::DefaultMutableTreeNode> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::tree::DefaultMutableTreeNode> new_object(jni::ref<java::lang::Object> p1, jboolean p2) { return base_::new_object(p1, p2); }
	void insert(jni::ref<javax::swing::tree::MutableTreeNode> p1, jint p2) { return call_method<"insert", void>(p1, p2); }
	void remove(jint p1) { return call_method<"remove", void>(p1); }
	void setParent(jni::ref<javax::swing::tree::MutableTreeNode> p1) { return call_method<"setParent", void>(p1); }
	jni::ref<javax::swing::tree::TreeNode> getParent() { return call_method<"getParent", jni::ref<javax::swing::tree::TreeNode>>(); }
	jni::ref<javax::swing::tree::TreeNode> getChildAt(jint p1) { return call_method<"getChildAt", jni::ref<javax::swing::tree::TreeNode>>(p1); }
	jint getChildCount() { return call_method<"getChildCount", jint>(); }
	jint getIndex(jni::ref<javax::swing::tree::TreeNode> p1) { return call_method<"getIndex", jint>(p1); }
	jni::ref<java::util::Enumeration> children() { return call_method<"children", jni::ref<java::util::Enumeration>>(); }
	void setAllowsChildren(jboolean p1) { return call_method<"setAllowsChildren", void>(p1); }
	jboolean getAllowsChildren() { return call_method<"getAllowsChildren", jboolean>(); }
	void setUserObject(jni::ref<java::lang::Object> p1) { return call_method<"setUserObject", void>(p1); }
	jni::ref<java::lang::Object> getUserObject() { return call_method<"getUserObject", jni::ref<java::lang::Object>>(); }
	void removeFromParent() { return call_method<"removeFromParent", void>(); }
	void remove(jni::ref<javax::swing::tree::MutableTreeNode> p1) { return call_method<"remove", void>(p1); }
	void removeAllChildren() { return call_method<"removeAllChildren", void>(); }
	void add(jni::ref<javax::swing::tree::MutableTreeNode> p1) { return call_method<"add", void>(p1); }
	jboolean isNodeAncestor(jni::ref<javax::swing::tree::TreeNode> p1) { return call_method<"isNodeAncestor", jboolean>(p1); }
	jboolean isNodeDescendant(jni::ref<javax::swing::tree::DefaultMutableTreeNode> p1) { return call_method<"isNodeDescendant", jboolean>(p1); }
	jni::ref<javax::swing::tree::TreeNode> getSharedAncestor(jni::ref<javax::swing::tree::DefaultMutableTreeNode> p1) { return call_method<"getSharedAncestor", jni::ref<javax::swing::tree::TreeNode>>(p1); }
	jboolean isNodeRelated(jni::ref<javax::swing::tree::DefaultMutableTreeNode> p1) { return call_method<"isNodeRelated", jboolean>(p1); }
	jint getDepth() { return call_method<"getDepth", jint>(); }
	jint getLevel() { return call_method<"getLevel", jint>(); }
	jni::ref<jni::array<javax::swing::tree::TreeNode>> getPath() { return call_method<"getPath", jni::ref<jni::array<javax::swing::tree::TreeNode>>>(); }
	jni::ref<jni::array<java::lang::Object>> getUserObjectPath() { return call_method<"getUserObjectPath", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<javax::swing::tree::TreeNode> getRoot() { return call_method<"getRoot", jni::ref<javax::swing::tree::TreeNode>>(); }
	jboolean isRoot() { return call_method<"isRoot", jboolean>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getNextNode() { return call_method<"getNextNode", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getPreviousNode() { return call_method<"getPreviousNode", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jni::ref<java::util::Enumeration> preorderEnumeration() { return call_method<"preorderEnumeration", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> postorderEnumeration() { return call_method<"postorderEnumeration", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> breadthFirstEnumeration() { return call_method<"breadthFirstEnumeration", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> depthFirstEnumeration() { return call_method<"depthFirstEnumeration", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> pathFromAncestorEnumeration(jni::ref<javax::swing::tree::TreeNode> p1) { return call_method<"pathFromAncestorEnumeration", jni::ref<java::util::Enumeration>>(p1); }
	jboolean isNodeChild(jni::ref<javax::swing::tree::TreeNode> p1) { return call_method<"isNodeChild", jboolean>(p1); }
	jni::ref<javax::swing::tree::TreeNode> getFirstChild() { return call_method<"getFirstChild", jni::ref<javax::swing::tree::TreeNode>>(); }
	jni::ref<javax::swing::tree::TreeNode> getLastChild() { return call_method<"getLastChild", jni::ref<javax::swing::tree::TreeNode>>(); }
	jni::ref<javax::swing::tree::TreeNode> getChildAfter(jni::ref<javax::swing::tree::TreeNode> p1) { return call_method<"getChildAfter", jni::ref<javax::swing::tree::TreeNode>>(p1); }
	jni::ref<javax::swing::tree::TreeNode> getChildBefore(jni::ref<javax::swing::tree::TreeNode> p1) { return call_method<"getChildBefore", jni::ref<javax::swing::tree::TreeNode>>(p1); }
	jboolean isNodeSibling(jni::ref<javax::swing::tree::TreeNode> p1) { return call_method<"isNodeSibling", jboolean>(p1); }
	jint getSiblingCount() { return call_method<"getSiblingCount", jint>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getNextSibling() { return call_method<"getNextSibling", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getPreviousSibling() { return call_method<"getPreviousSibling", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jboolean isLeaf() { return call_method<"isLeaf", jboolean>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getFirstLeaf() { return call_method<"getFirstLeaf", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getLastLeaf() { return call_method<"getLastLeaf", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getNextLeaf() { return call_method<"getNextLeaf", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jni::ref<javax::swing::tree::DefaultMutableTreeNode> getPreviousLeaf() { return call_method<"getPreviousLeaf", jni::ref<javax::swing::tree::DefaultMutableTreeNode>>(); }
	jint getLeafCount() { return call_method<"getLeafCount", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	DefaultMutableTreeNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTMUTABLETREENODE
