// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_VMSUPPORT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VMSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm { class VMSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::VMSupport>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/VMSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VMSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_VMSUPPORT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VMSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/jdk/internal/reflect/ConstantPool.h>
#include <scapix/java_api/jdk/internal/vm/VMSupport_AnnotationDecoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::VMSupport : public jni::object_base<"jdk/internal/vm/VMSupport",
	java::lang::Object>
{
public:

	using AnnotationDecoder = VMSupport_AnnotationDecoder;

	static jni::ref<jdk::internal::vm::VMSupport> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Properties> getAgentProperties() { return call_static_method<"getAgentProperties", jni::ref<java::util::Properties>>(); }
	static jni::ref<jni::array<jbyte>> serializePropertiesToByteArray() { return call_static_method<"serializePropertiesToByteArray", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> serializeAgentPropertiesToByteArray() { return call_static_method<"serializeAgentPropertiesToByteArray", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<java::lang::String> getVMTemporaryDirectory() { return call_static_method<"getVMTemporaryDirectory", jni::ref<java::lang::String>>(); }
	static void decodeAndThrowThrowable(jint format, jlong buffer, jboolean p3) { return call_static_method<"decodeAndThrowThrowable", void>(format, buffer, p3); }
	static jint encodeThrowable(jni::ref<java::lang::Throwable> throwable, jlong buffer, jint p3) { return call_static_method<"encodeThrowable", jint>(throwable, buffer, p3); }
	static jni::ref<jni::array<jbyte>> encodeAnnotations(jni::ref<jni::array<jbyte>> rawAnnotations, jni::ref<java::lang::Class> declaringClass, jni::ref<jdk::internal::reflect::ConstantPool> cp, jboolean forClass, jni::ref<jni::array<java::lang::Class>> selectAnnotationClasses) { return call_static_method<"encodeAnnotations", jni::ref<jni::array<jbyte>>>(rawAnnotations, declaringClass, cp, forClass, selectAnnotationClasses); }
	static jni::ref<jni::array<jbyte>> encodeAnnotations(jni::ref<java::util::Collection> annotations) { return call_static_method<"encodeAnnotations", jni::ref<jni::array<jbyte>>>(annotations); }
	static jni::ref<java::util::List> decodeAnnotations(jni::ref<jni::array<jbyte>> encoded, jni::ref<jdk::internal::vm::VMSupport_AnnotationDecoder> decoder) { return call_static_method<"decodeAnnotations", jni::ref<java::util::List>>(encoded, decoder); }

protected:

	VMSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VMSUPPORT
