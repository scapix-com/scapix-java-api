// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/foreign/abi/LinkerOptions_LinkerOptionImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_LINKEROPTIONS_CAPTURECALLSTATE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_LINKEROPTIONS_CAPTURECALLSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class LinkerOptions_CaptureCallState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::LinkerOptions_CaptureCallState>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/LinkerOptions$CaptureCallState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::foreign::abi::LinkerOptions_LinkerOptionImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_LINKEROPTIONS_CAPTURECALLSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_LINKEROPTIONS_CAPTURECALLSTATE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_LINKEROPTIONS_CAPTURECALLSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/FunctionDescriptor.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::LinkerOptions_CaptureCallState : public jni::object_base<"jdk/internal/foreign/abi/LinkerOptions$CaptureCallState",
	java::lang::Record,
	jdk::internal::foreign::abi::LinkerOptions_LinkerOptionImpl>
{
public:

	static jni::ref<jdk::internal::foreign::abi::LinkerOptions_CaptureCallState> new_object(jni::ref<java::util::Set> saved) { return base_::new_object(saved); }
	void validateForDowncall(jni::ref<java::lang::foreign::FunctionDescriptor> descriptor) { return call_method<"validateForDowncall", void>(descriptor); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::Set> saved() { return call_method<"saved", jni::ref<java::util::Set>>(); }

protected:

	LinkerOptions_CaptureCallState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_LINKEROPTIONS_CAPTURECALLSTATE