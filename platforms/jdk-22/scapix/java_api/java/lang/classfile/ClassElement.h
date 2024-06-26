// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassFileElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSELEMENT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class ClassElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::ClassElement>
{
	static constexpr fixed_string class_name = "java/lang/classfile/ClassElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassFileElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSELEMENT)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSELEMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::ClassElement : public jni::object_base<"java/lang/classfile/ClassElement",
	java::lang::Object,
	java::lang::classfile::ClassFileElement>
{
public:


protected:

	ClassElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSELEMENT
