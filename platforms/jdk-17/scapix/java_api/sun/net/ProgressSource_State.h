// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_STATE_FWD
#define SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_STATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net { class ProgressSource_State; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ProgressSource_State>
{
	static constexpr fixed_string class_name = "sun/net/ProgressSource$State";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_STATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_STATE)
#define SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_STATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ProgressSource_State : public jni::object_base<"sun/net/ProgressSource$State",
	java::lang::Enum>
{
public:

	static jni::ref<sun::net::ProgressSource_State> NEW() { return get_static_field<"NEW", jni::ref<sun::net::ProgressSource_State>>(); }
	static jni::ref<sun::net::ProgressSource_State> CONNECTED() { return get_static_field<"CONNECTED", jni::ref<sun::net::ProgressSource_State>>(); }
	static jni::ref<sun::net::ProgressSource_State> UPDATE() { return get_static_field<"UPDATE", jni::ref<sun::net::ProgressSource_State>>(); }
	static jni::ref<sun::net::ProgressSource_State> DELETE() { return get_static_field<"DELETE", jni::ref<sun::net::ProgressSource_State>>(); }

	static jni::ref<jni::array<sun::net::ProgressSource_State>> values() { return call_static_method<"values", jni::ref<jni::array<sun::net::ProgressSource_State>>>(); }
	static jni::ref<sun::net::ProgressSource_State> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::net::ProgressSource_State>>(name); }

protected:

	ProgressSource_State(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_STATE