// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/components/ClassPrinter_Node.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CLASSPRINTER_MAPNODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CLASSPRINTER_MAPNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::components { class ClassPrinter_MapNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::components::ClassPrinter_MapNode>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/components/ClassPrinter$MapNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::components::ClassPrinter_Node, scapix::java_api::java::util::Map>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CLASSPRINTER_MAPNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CLASSPRINTER_MAPNODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CLASSPRINTER_MAPNODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::components::ClassPrinter_MapNode : public jni::object_base<"jdk/internal/classfile/components/ClassPrinter$MapNode",
	java::lang::Object,
	jdk::internal::classfile::components::ClassPrinter_Node,
	java::util::Map>
{
public:


protected:

	ClassPrinter_MapNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CLASSPRINTER_MAPNODE
