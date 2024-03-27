// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_STANDARDGLYPHVECTOR_ADL_FWD
#define SCAPIX_JAVA_API_SUN_FONT_STANDARDGLYPHVECTOR_ADL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class StandardGlyphVector_ADL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::StandardGlyphVector_ADL>
{
	static constexpr fixed_string class_name = "sun/font/StandardGlyphVector$ADL";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_STANDARDGLYPHVECTOR_ADL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_STANDARDGLYPHVECTOR_ADL)
#define SCAPIX_JAVA_API_SUN_FONT_STANDARDGLYPHVECTOR_ADL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::StandardGlyphVector_ADL : public jni::object_base<"sun/font/StandardGlyphVector$ADL",
	java::lang::Object>
{
public:

	jfloat ascentX() { return get_field<"ascentX", jfloat>(); }
	void ascentX(jfloat v) { set_field<"ascentX", jfloat>(v); }
	jfloat ascentY() { return get_field<"ascentY", jfloat>(); }
	void ascentY(jfloat v) { set_field<"ascentY", jfloat>(v); }
	jfloat descentX() { return get_field<"descentX", jfloat>(); }
	void descentX(jfloat v) { set_field<"descentX", jfloat>(v); }
	jfloat descentY() { return get_field<"descentY", jfloat>(); }
	void descentY(jfloat v) { set_field<"descentY", jfloat>(v); }
	jfloat leadingX() { return get_field<"leadingX", jfloat>(); }
	void leadingX(jfloat v) { set_field<"leadingX", jfloat>(v); }
	jfloat leadingY() { return get_field<"leadingY", jfloat>(); }
	void leadingY(jfloat v) { set_field<"leadingY", jfloat>(v); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	StandardGlyphVector_ADL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_STANDARDGLYPHVECTOR_ADL