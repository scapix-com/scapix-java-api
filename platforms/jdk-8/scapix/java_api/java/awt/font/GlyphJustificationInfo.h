// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_GLYPHJUSTIFICATIONINFO_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_GLYPHJUSTIFICATIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::font { class GlyphJustificationInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::font::GlyphJustificationInfo>
{
	static constexpr fixed_string class_name = "java/awt/font/GlyphJustificationInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_GLYPHJUSTIFICATIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_GLYPHJUSTIFICATIONINFO)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_GLYPHJUSTIFICATIONINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::font::GlyphJustificationInfo : public jni::object_base<"java/awt/font/GlyphJustificationInfo",
	java::lang::Object>
{
public:

	static jint PRIORITY_KASHIDA() { return get_static_field<"PRIORITY_KASHIDA", jint>(); }
	static jint PRIORITY_WHITESPACE() { return get_static_field<"PRIORITY_WHITESPACE", jint>(); }
	static jint PRIORITY_INTERCHAR() { return get_static_field<"PRIORITY_INTERCHAR", jint>(); }
	static jint PRIORITY_NONE() { return get_static_field<"PRIORITY_NONE", jint>(); }
	jfloat weight() { return get_field<"weight", jfloat>(); }
	jint growPriority() { return get_field<"growPriority", jint>(); }
	jboolean growAbsorb() { return get_field<"growAbsorb", jboolean>(); }
	jfloat growLeftLimit() { return get_field<"growLeftLimit", jfloat>(); }
	jfloat growRightLimit() { return get_field<"growRightLimit", jfloat>(); }
	jint shrinkPriority() { return get_field<"shrinkPriority", jint>(); }
	jboolean shrinkAbsorb() { return get_field<"shrinkAbsorb", jboolean>(); }
	jfloat shrinkLeftLimit() { return get_field<"shrinkLeftLimit", jfloat>(); }
	jfloat shrinkRightLimit() { return get_field<"shrinkRightLimit", jfloat>(); }

	static jni::ref<java::awt::font::GlyphJustificationInfo> new_object(jfloat p1, jboolean p2, jint p3, jfloat p4, jfloat p5, jboolean p6, jint p7, jfloat p8, jfloat p9) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9); }

protected:

	GlyphJustificationInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_GLYPHJUSTIFICATIONINFO
