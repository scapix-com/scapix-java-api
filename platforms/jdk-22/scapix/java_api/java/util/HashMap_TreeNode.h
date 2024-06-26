// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/LinkedHashMap_Entry.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_TREENODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_TREENODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class HashMap_TreeNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::HashMap_TreeNode>
{
	static constexpr fixed_string class_name = "java/util/HashMap$TreeNode";
	using base_classes = std::tuple<scapix::java_api::java::util::LinkedHashMap_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_TREENODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_TREENODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_TREENODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::HashMap_TreeNode : public jni::object_base<"java/util/HashMap$TreeNode",
	java::util::LinkedHashMap_Entry>
{
public:


protected:

	HashMap_TreeNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHMAP_TREENODE
