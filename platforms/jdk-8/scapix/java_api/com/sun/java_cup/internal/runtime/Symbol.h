// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_CUP_INTERNAL_RUNTIME_SYMBOL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_CUP_INTERNAL_RUNTIME_SYMBOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java_cup::internal::runtime { class Symbol; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java_cup::internal::runtime::Symbol>
{
	static constexpr fixed_string class_name = "com/sun/java_cup/internal/runtime/Symbol";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_CUP_INTERNAL_RUNTIME_SYMBOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_CUP_INTERNAL_RUNTIME_SYMBOL)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_CUP_INTERNAL_RUNTIME_SYMBOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java_cup::internal::runtime::Symbol : public jni::object_base<"com/sun/java_cup/internal/runtime/Symbol",
	java::lang::Object>
{
public:

	jint sym() { return get_field<"sym", jint>(); }
	void sym(jint v) { set_field<"sym", jint>(v); }
	jint parse_state() { return get_field<"parse_state", jint>(); }
	void parse_state(jint v) { set_field<"parse_state", jint>(v); }
	jint left() { return get_field<"left", jint>(); }
	void left(jint v) { set_field<"left", jint>(v); }
	jint right() { return get_field<"right", jint>(); }
	void right(jint v) { set_field<"right", jint>(v); }
	jni::ref<java::lang::Object> value() { return get_field<"value", jni::ref<java::lang::Object>>(); }
	void value(jni::ref<java::lang::Object> v) { set_field<"value", jni::ref<java::lang::Object>>(v); }

	static jni::ref<com::sun::java_cup::internal::runtime::Symbol> new_object(jint p1, jint p2, jint p3, jni::ref<java::lang::Object> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<com::sun::java_cup::internal::runtime::Symbol> new_object(jint p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::java_cup::internal::runtime::Symbol> new_object(jint p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::java_cup::internal::runtime::Symbol> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::java_cup::internal::runtime::Symbol> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Symbol(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_CUP_INTERNAL_RUNTIME_SYMBOL
