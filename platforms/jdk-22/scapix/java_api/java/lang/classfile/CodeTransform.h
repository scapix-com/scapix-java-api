// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassFileTransform.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CODETRANSFORM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CODETRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class CodeTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::CodeTransform>
{
	static constexpr fixed_string class_name = "java/lang/classfile/CodeTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassFileTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CODETRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CODETRANSFORM)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CODETRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassFileTransform_ResolvedTransform.h>
#include <scapix/java_api/java/lang/classfile/CodeBuilder.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::CodeTransform : public jni::object_base<"java/lang/classfile/CodeTransform",
	java::lang::Object,
	java::lang::classfile::ClassFileTransform>
{
public:

	static jni::ref<java::lang::classfile::CodeTransform> ACCEPT_ALL() { return get_static_field<"ACCEPT_ALL", jni::ref<java::lang::classfile::CodeTransform>>(); }

	static jni::ref<java::lang::classfile::CodeTransform> ofStateful(jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"ofStateful", jni::ref<java::lang::classfile::CodeTransform>>(supplier); }
	static jni::ref<java::lang::classfile::CodeTransform> endHandler(jni::ref<java::util::function::Consumer> finisher) { return call_static_method<"endHandler", jni::ref<java::lang::classfile::CodeTransform>>(finisher); }
	jni::ref<java::lang::classfile::CodeTransform> andThen(jni::ref<java::lang::classfile::CodeTransform> t) { return call_method<"andThen", jni::ref<java::lang::classfile::CodeTransform>>(t); }
	jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform> resolve(jni::ref<java::lang::classfile::CodeBuilder> builder) { return call_method<"resolve", jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform>>(builder); }

protected:

	CodeTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CODETRANSFORM
