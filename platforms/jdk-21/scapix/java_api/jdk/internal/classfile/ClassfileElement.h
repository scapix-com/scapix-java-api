// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILEELEMENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILEELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class ClassfileElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::ClassfileElement>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/ClassfileElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILEELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILEELEMENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILEELEMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::ClassfileElement : public jni::object_base<"jdk/internal/classfile/ClassfileElement",
	java::lang::Object>
{
public:


protected:

	ClassfileElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILEELEMENT