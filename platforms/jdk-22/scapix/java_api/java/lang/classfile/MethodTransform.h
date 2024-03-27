// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassFileTransform.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_METHODTRANSFORM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_METHODTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class MethodTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::MethodTransform>
{
	static constexpr fixed_string class_name = "java/lang/classfile/MethodTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassFileTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_METHODTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_METHODTRANSFORM)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_METHODTRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassFileTransform_ResolvedTransform.h>
#include <scapix/java_api/java/lang/classfile/CodeTransform.h>
#include <scapix/java_api/java/lang/classfile/MethodBuilder.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::MethodTransform : public jni::object_base<"java/lang/classfile/MethodTransform",
	java::lang::Object,
	java::lang::classfile::ClassFileTransform>
{
public:

	static jni::ref<java::lang::classfile::MethodTransform> ACCEPT_ALL() { return get_static_field<"ACCEPT_ALL", jni::ref<java::lang::classfile::MethodTransform>>(); }

	static jni::ref<java::lang::classfile::MethodTransform> ofStateful(jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"ofStateful", jni::ref<java::lang::classfile::MethodTransform>>(supplier); }
	static jni::ref<java::lang::classfile::MethodTransform> endHandler(jni::ref<java::util::function::Consumer> finisher) { return call_static_method<"endHandler", jni::ref<java::lang::classfile::MethodTransform>>(finisher); }
	static jni::ref<java::lang::classfile::MethodTransform> dropping(jni::ref<java::util::function::Predicate> filter) { return call_static_method<"dropping", jni::ref<java::lang::classfile::MethodTransform>>(filter); }
	static jni::ref<java::lang::classfile::MethodTransform> transformingCode(jni::ref<java::lang::classfile::CodeTransform> xform) { return call_static_method<"transformingCode", jni::ref<java::lang::classfile::MethodTransform>>(xform); }
	jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform> resolve(jni::ref<java::lang::classfile::MethodBuilder> builder) { return call_method<"resolve", jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform>>(builder); }
	jni::ref<java::lang::classfile::MethodTransform> andThen(jni::ref<java::lang::classfile::MethodTransform> t) { return call_method<"andThen", jni::ref<java::lang::classfile::MethodTransform>>(t); }

protected:

	MethodTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_METHODTRANSFORM