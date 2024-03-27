// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_TCKIND_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_TCKIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class TCKind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::TCKind>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/TCKind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_TCKIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_TCKIND)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_TCKIND

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::TCKind : public jni::object_base<"org/omg/CORBA/TCKind",
	java::lang::Object>
{
public:

	static jint _tk_null() { return get_static_field<"_tk_null", jint>(); }
	static jint _tk_void() { return get_static_field<"_tk_void", jint>(); }
	static jint _tk_short() { return get_static_field<"_tk_short", jint>(); }
	static jint _tk_long() { return get_static_field<"_tk_long", jint>(); }
	static jint _tk_ushort() { return get_static_field<"_tk_ushort", jint>(); }
	static jint _tk_ulong() { return get_static_field<"_tk_ulong", jint>(); }
	static jint _tk_float() { return get_static_field<"_tk_float", jint>(); }
	static jint _tk_double() { return get_static_field<"_tk_double", jint>(); }
	static jint _tk_boolean() { return get_static_field<"_tk_boolean", jint>(); }
	static jint _tk_char() { return get_static_field<"_tk_char", jint>(); }
	static jint _tk_octet() { return get_static_field<"_tk_octet", jint>(); }
	static jint _tk_any() { return get_static_field<"_tk_any", jint>(); }
	static jint _tk_TypeCode() { return get_static_field<"_tk_TypeCode", jint>(); }
	static jint _tk_Principal() { return get_static_field<"_tk_Principal", jint>(); }
	static jint _tk_objref() { return get_static_field<"_tk_objref", jint>(); }
	static jint _tk_struct() { return get_static_field<"_tk_struct", jint>(); }
	static jint _tk_union() { return get_static_field<"_tk_union", jint>(); }
	static jint _tk_enum() { return get_static_field<"_tk_enum", jint>(); }
	static jint _tk_string() { return get_static_field<"_tk_string", jint>(); }
	static jint _tk_sequence() { return get_static_field<"_tk_sequence", jint>(); }
	static jint _tk_array() { return get_static_field<"_tk_array", jint>(); }
	static jint _tk_alias() { return get_static_field<"_tk_alias", jint>(); }
	static jint _tk_except() { return get_static_field<"_tk_except", jint>(); }
	static jint _tk_longlong() { return get_static_field<"_tk_longlong", jint>(); }
	static jint _tk_ulonglong() { return get_static_field<"_tk_ulonglong", jint>(); }
	static jint _tk_longdouble() { return get_static_field<"_tk_longdouble", jint>(); }
	static jint _tk_wchar() { return get_static_field<"_tk_wchar", jint>(); }
	static jint _tk_wstring() { return get_static_field<"_tk_wstring", jint>(); }
	static jint _tk_fixed() { return get_static_field<"_tk_fixed", jint>(); }
	static jint _tk_value() { return get_static_field<"_tk_value", jint>(); }
	static jint _tk_value_box() { return get_static_field<"_tk_value_box", jint>(); }
	static jint _tk_native() { return get_static_field<"_tk_native", jint>(); }
	static jint _tk_abstract_interface() { return get_static_field<"_tk_abstract_interface", jint>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_null() { return get_static_field<"tk_null", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_void() { return get_static_field<"tk_void", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_short() { return get_static_field<"tk_short", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_long() { return get_static_field<"tk_long", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_ushort() { return get_static_field<"tk_ushort", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_ulong() { return get_static_field<"tk_ulong", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_float() { return get_static_field<"tk_float", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_double() { return get_static_field<"tk_double", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_boolean() { return get_static_field<"tk_boolean", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_char() { return get_static_field<"tk_char", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_octet() { return get_static_field<"tk_octet", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_any() { return get_static_field<"tk_any", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_TypeCode() { return get_static_field<"tk_TypeCode", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_Principal() { return get_static_field<"tk_Principal", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_objref() { return get_static_field<"tk_objref", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_struct() { return get_static_field<"tk_struct", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_union() { return get_static_field<"tk_union", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_enum() { return get_static_field<"tk_enum", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_string() { return get_static_field<"tk_string", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_sequence() { return get_static_field<"tk_sequence", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_array() { return get_static_field<"tk_array", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_alias() { return get_static_field<"tk_alias", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_except() { return get_static_field<"tk_except", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_longlong() { return get_static_field<"tk_longlong", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_ulonglong() { return get_static_field<"tk_ulonglong", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_longdouble() { return get_static_field<"tk_longdouble", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_wchar() { return get_static_field<"tk_wchar", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_wstring() { return get_static_field<"tk_wstring", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_fixed() { return get_static_field<"tk_fixed", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_value() { return get_static_field<"tk_value", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_value_box() { return get_static_field<"tk_value_box", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_native() { return get_static_field<"tk_native", jni::ref<org::omg::CORBA::TCKind>>(); }
	static jni::ref<org::omg::CORBA::TCKind> tk_abstract_interface() { return get_static_field<"tk_abstract_interface", jni::ref<org::omg::CORBA::TCKind>>(); }

	jint value() { return call_method<"value", jint>(); }
	static jni::ref<org::omg::CORBA::TCKind> from_int(jint p1) { return call_static_method<"from_int", jni::ref<org::omg::CORBA::TCKind>>(p1); }

protected:

	TCKind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_TCKIND