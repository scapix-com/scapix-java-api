// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/ClassfileElement.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSELEMENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class ClassElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::ClassElement>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/ClassElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::ClassfileElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSELEMENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSELEMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::ClassElement : public jni::object_base<"jdk/internal/classfile/ClassElement",
	java::lang::Object,
	jdk::internal::classfile::ClassfileElement>
{
public:


protected:

	ClassElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSELEMENT
