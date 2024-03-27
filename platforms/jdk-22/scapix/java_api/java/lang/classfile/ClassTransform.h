// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassFileTransform.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSTRANSFORM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class ClassTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::ClassTransform>
{
	static constexpr fixed_string class_name = "java/lang/classfile/ClassTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassFileTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSTRANSFORM)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSTRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassBuilder.h>
#include <scapix/java_api/java/lang/classfile/ClassFileTransform_ResolvedTransform.h>
#include <scapix/java_api/java/lang/classfile/CodeTransform.h>
#include <scapix/java_api/java/lang/classfile/FieldTransform.h>
#include <scapix/java_api/java/lang/classfile/MethodTransform.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::ClassTransform : public jni::object_base<"java/lang/classfile/ClassTransform",
	java::lang::Object,
	java::lang::classfile::ClassFileTransform>
{
public:

	static jni::ref<java::lang::classfile::ClassTransform> ACCEPT_ALL() { return get_static_field<"ACCEPT_ALL", jni::ref<java::lang::classfile::ClassTransform>>(); }

	static jni::ref<java::lang::classfile::ClassTransform> ofStateful(jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"ofStateful", jni::ref<java::lang::classfile::ClassTransform>>(supplier); }
	static jni::ref<java::lang::classfile::ClassTransform> endHandler(jni::ref<java::util::function::Consumer> finisher) { return call_static_method<"endHandler", jni::ref<java::lang::classfile::ClassTransform>>(finisher); }
	static jni::ref<java::lang::classfile::ClassTransform> dropping(jni::ref<java::util::function::Predicate> filter) { return call_static_method<"dropping", jni::ref<java::lang::classfile::ClassTransform>>(filter); }
	static jni::ref<java::lang::classfile::ClassTransform> transformingMethods(jni::ref<java::util::function::Predicate> filter, jni::ref<java::lang::classfile::MethodTransform> xform) { return call_static_method<"transformingMethods", jni::ref<java::lang::classfile::ClassTransform>>(filter, xform); }
	static jni::ref<java::lang::classfile::ClassTransform> transformingMethods(jni::ref<java::lang::classfile::MethodTransform> xform) { return call_static_method<"transformingMethods", jni::ref<java::lang::classfile::ClassTransform>>(xform); }
	static jni::ref<java::lang::classfile::ClassTransform> transformingMethodBodies(jni::ref<java::util::function::Predicate> filter, jni::ref<java::lang::classfile::CodeTransform> xform) { return call_static_method<"transformingMethodBodies", jni::ref<java::lang::classfile::ClassTransform>>(filter, xform); }
	static jni::ref<java::lang::classfile::ClassTransform> transformingMethodBodies(jni::ref<java::lang::classfile::CodeTransform> xform) { return call_static_method<"transformingMethodBodies", jni::ref<java::lang::classfile::ClassTransform>>(xform); }
	static jni::ref<java::lang::classfile::ClassTransform> transformingFields(jni::ref<java::lang::classfile::FieldTransform> xform) { return call_static_method<"transformingFields", jni::ref<java::lang::classfile::ClassTransform>>(xform); }
	jni::ref<java::lang::classfile::ClassTransform> andThen(jni::ref<java::lang::classfile::ClassTransform> t) { return call_method<"andThen", jni::ref<java::lang::classfile::ClassTransform>>(t); }
	jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform> resolve(jni::ref<java::lang::classfile::ClassBuilder> builder) { return call_method<"resolve", jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform>>(builder); }

protected:

	ClassTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSTRANSFORM
