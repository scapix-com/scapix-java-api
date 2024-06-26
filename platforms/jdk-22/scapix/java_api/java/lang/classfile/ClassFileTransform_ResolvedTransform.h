// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILETRANSFORM_RESOLVEDTRANSFORM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILETRANSFORM_RESOLVEDTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class ClassFileTransform_ResolvedTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::ClassFileTransform_ResolvedTransform>
{
	static constexpr fixed_string class_name = "java/lang/classfile/ClassFileTransform$ResolvedTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILETRANSFORM_RESOLVEDTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILETRANSFORM_RESOLVEDTRANSFORM)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILETRANSFORM_RESOLVEDTRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::ClassFileTransform_ResolvedTransform : public jni::object_base<"java/lang/classfile/ClassFileTransform$ResolvedTransform",
	java::lang::Object>
{
public:

	jni::ref<java::util::function::Consumer> consumer() { return call_method<"consumer", jni::ref<java::util::function::Consumer>>(); }
	jni::ref<java::lang::Runnable> endHandler() { return call_method<"endHandler", jni::ref<java::lang::Runnable>>(); }
	jni::ref<java::lang::Runnable> startHandler() { return call_method<"startHandler", jni::ref<java::lang::Runnable>>(); }

protected:

	ClassFileTransform_ResolvedTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILETRANSFORM_RESOLVEDTRANSFORM
