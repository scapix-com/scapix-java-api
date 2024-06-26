// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_TMSCHEMA_TYPEENUM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_TMSCHEMA_TYPEENUM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class TMSchema_TypeEnum; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/TMSchema$TypeEnum";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_TMSCHEMA_TYPEENUM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_TMSCHEMA_TYPEENUM)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_TMSCHEMA_TYPEENUM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::TMSchema_TypeEnum : public jni::object_base<"com/sun/java/swing/plaf/windows/TMSchema$TypeEnum",
	java::lang::Enum>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum> BT_IMAGEFILE() { return get_static_field<"BT_IMAGEFILE", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>>(); }
	static jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum> BT_BORDERFILL() { return get_static_field<"BT_BORDERFILL", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>>(); }
	static jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum> TST_NONE() { return get_static_field<"TST_NONE", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>>(); }
	static jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum> TST_SINGLE() { return get_static_field<"TST_SINGLE", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>>(); }
	static jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum> TST_CONTINUOUS() { return get_static_field<"TST_CONTINUOUS", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>>(); }

	static jni::ref<jni::array<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>> values() { return call_static_method<"values", jni::ref<jni::array<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>>>(); }
	static jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<com::sun::java::swing::plaf::windows::TMSchema_TypeEnum>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TMSchema_TypeEnum(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_TMSCHEMA_TYPEENUM
