// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::ppc64 { class CallArranger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::ppc64::CallArranger>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/ppc64/CallArranger";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/foreign/FunctionDescriptor.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/jdk/internal/foreign/abi/AbstractLinker_UpcallStubFactory.h>
#include <scapix/java_api/jdk/internal/foreign/abi/LinkerOptions.h>
#include <scapix/java_api/jdk/internal/foreign/abi/ppc64/CallArranger_Bindings.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::ppc64::CallArranger : public jni::object_base<"jdk/internal/foreign/abi/ppc64/CallArranger",
	java::lang::Object>
{
public:

	using Bindings = CallArranger_Bindings;

	static jint MAX_REGISTER_ARGUMENTS() { return get_static_field<"MAX_REGISTER_ARGUMENTS", jint>(); }
	static jint MAX_FLOAT_REGISTER_ARGUMENTS() { return get_static_field<"MAX_FLOAT_REGISTER_ARGUMENTS", jint>(); }
	static jni::ref<jdk::internal::foreign::abi::ppc64::CallArranger> ABIv2() { return get_static_field<"ABIv2", jni::ref<jdk::internal::foreign::abi::ppc64::CallArranger>>(); }

	jni::ref<jdk::internal::foreign::abi::ppc64::CallArranger_Bindings> getBindings(jni::ref<java::lang::invoke::MethodType> mt, jni::ref<java::lang::foreign::FunctionDescriptor> cDesc, jboolean forUpcall) { return call_method<"getBindings", jni::ref<jdk::internal::foreign::abi::ppc64::CallArranger_Bindings>>(mt, cDesc, forUpcall); }
	jni::ref<jdk::internal::foreign::abi::ppc64::CallArranger_Bindings> getBindings(jni::ref<java::lang::invoke::MethodType> mt, jni::ref<java::lang::foreign::FunctionDescriptor> cDesc, jboolean forUpcall, jni::ref<jdk::internal::foreign::abi::LinkerOptions> options) { return call_method<"getBindings", jni::ref<jdk::internal::foreign::abi::ppc64::CallArranger_Bindings>>(mt, cDesc, forUpcall, options); }
	jni::ref<java::lang::invoke::MethodHandle> arrangeDowncall(jni::ref<java::lang::invoke::MethodType> mt, jni::ref<java::lang::foreign::FunctionDescriptor> cDesc, jni::ref<jdk::internal::foreign::abi::LinkerOptions> options) { return call_method<"arrangeDowncall", jni::ref<java::lang::invoke::MethodHandle>>(mt, cDesc, options); }
	jni::ref<jdk::internal::foreign::abi::AbstractLinker_UpcallStubFactory> arrangeUpcall(jni::ref<java::lang::invoke::MethodType> mt, jni::ref<java::lang::foreign::FunctionDescriptor> cDesc, jni::ref<jdk::internal::foreign::abi::LinkerOptions> options) { return call_method<"arrangeUpcall", jni::ref<jdk::internal::foreign::abi::AbstractLinker_UpcallStubFactory>>(mt, cDesc, options); }

protected:

	CallArranger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER
