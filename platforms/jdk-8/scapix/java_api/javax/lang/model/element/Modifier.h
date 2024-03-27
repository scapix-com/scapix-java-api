// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_MODIFIER_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_MODIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::element { class Modifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::element::Modifier>
{
	static constexpr fixed_string class_name = "javax/lang/model/element/Modifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_MODIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_MODIFIER)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_MODIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::element::Modifier : public jni::object_base<"javax/lang/model/element/Modifier",
	java::lang::Enum>
{
public:

	static jni::ref<javax::lang::model::element::Modifier> PUBLIC() { return get_static_field<"PUBLIC", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> PROTECTED() { return get_static_field<"PROTECTED", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> PRIVATE() { return get_static_field<"PRIVATE", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> ABSTRACT() { return get_static_field<"ABSTRACT", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> STATIC() { return get_static_field<"STATIC", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> FINAL() { return get_static_field<"FINAL", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> TRANSIENT() { return get_static_field<"TRANSIENT", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> VOLATILE() { return get_static_field<"VOLATILE", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> SYNCHRONIZED() { return get_static_field<"SYNCHRONIZED", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> NATIVE() { return get_static_field<"NATIVE", jni::ref<javax::lang::model::element::Modifier>>(); }
	static jni::ref<javax::lang::model::element::Modifier> STRICTFP() { return get_static_field<"STRICTFP", jni::ref<javax::lang::model::element::Modifier>>(); }

	static jni::ref<jni::array<javax::lang::model::element::Modifier>> values() { return call_static_method<"values", jni::ref<jni::array<javax::lang::model::element::Modifier>>>(); }
	static jni::ref<javax::lang::model::element::Modifier> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<javax::lang::model::element::Modifier>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Modifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_MODIFIER
