// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_WALKERSTATE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_WALKERSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StackStreamFactory_WalkerState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StackStreamFactory_WalkerState>
{
	static constexpr fixed_string class_name = "java/lang/StackStreamFactory$WalkerState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_WALKERSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_WALKERSTATE)
#define SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_WALKERSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::StackStreamFactory_WalkerState : public jni::object_base<"java/lang/StackStreamFactory$WalkerState",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::StackStreamFactory_WalkerState> NEW() { return get_static_field<"NEW", jni::ref<java::lang::StackStreamFactory_WalkerState>>(); }
	static jni::ref<java::lang::StackStreamFactory_WalkerState> OPEN() { return get_static_field<"OPEN", jni::ref<java::lang::StackStreamFactory_WalkerState>>(); }
	static jni::ref<java::lang::StackStreamFactory_WalkerState> CLOSED() { return get_static_field<"CLOSED", jni::ref<java::lang::StackStreamFactory_WalkerState>>(); }

	static jni::ref<jni::array<java::lang::StackStreamFactory_WalkerState>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::StackStreamFactory_WalkerState>>>(); }
	static jni::ref<java::lang::StackStreamFactory_WalkerState> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::StackStreamFactory_WalkerState>>(name); }

protected:

	StackStreamFactory_WalkerState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_WALKERSTATE
