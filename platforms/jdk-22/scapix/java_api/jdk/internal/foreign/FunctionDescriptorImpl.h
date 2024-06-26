// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/foreign/FunctionDescriptor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_FUNCTIONDESCRIPTORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_FUNCTIONDESCRIPTORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class FunctionDescriptorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::FunctionDescriptorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/FunctionDescriptorImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::foreign::FunctionDescriptor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_FUNCTIONDESCRIPTORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_FUNCTIONDESCRIPTORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_FUNCTIONDESCRIPTORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::FunctionDescriptorImpl : public jni::object_base<"jdk/internal/foreign/FunctionDescriptorImpl",
	java::lang::Object,
	java::lang::foreign::FunctionDescriptor>
{
public:

	jni::ref<java::util::Optional> returnLayout() { return call_method<"returnLayout", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::List> argumentLayouts() { return call_method<"argumentLayouts", jni::ref<java::util::List>>(); }
	jni::ref<jdk::internal::foreign::FunctionDescriptorImpl> appendArgumentLayouts(jni::ref<jni::array<java::lang::foreign::MemoryLayout>> addedLayouts) { return call_method<"appendArgumentLayouts", jni::ref<jdk::internal::foreign::FunctionDescriptorImpl>>(addedLayouts); }
	jni::ref<jdk::internal::foreign::FunctionDescriptorImpl> insertArgumentLayouts(jint index, jni::ref<jni::array<java::lang::foreign::MemoryLayout>> addedLayouts) { return call_method<"insertArgumentLayouts", jni::ref<jdk::internal::foreign::FunctionDescriptorImpl>>(index, addedLayouts); }
	jni::ref<jdk::internal::foreign::FunctionDescriptorImpl> changeReturnLayout(jni::ref<java::lang::foreign::MemoryLayout> newReturn) { return call_method<"changeReturnLayout", jni::ref<jdk::internal::foreign::FunctionDescriptorImpl>>(newReturn); }
	jni::ref<jdk::internal::foreign::FunctionDescriptorImpl> dropReturnLayout() { return call_method<"dropReturnLayout", jni::ref<jdk::internal::foreign::FunctionDescriptorImpl>>(); }
	jni::ref<java::lang::invoke::MethodType> toMethodType() { return call_method<"toMethodType", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<java::lang::foreign::FunctionDescriptor> of(jni::ref<java::lang::foreign::MemoryLayout> resLayout, jni::ref<java::util::List> argLayouts) { return call_static_method<"of", jni::ref<java::lang::foreign::FunctionDescriptor>>(resLayout, argLayouts); }
	static jni::ref<java::lang::foreign::FunctionDescriptor> ofVoid(jni::ref<java::util::List> argLayouts) { return call_static_method<"ofVoid", jni::ref<java::lang::foreign::FunctionDescriptor>>(argLayouts); }

protected:

	FunctionDescriptorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_FUNCTIONDESCRIPTORIMPL
