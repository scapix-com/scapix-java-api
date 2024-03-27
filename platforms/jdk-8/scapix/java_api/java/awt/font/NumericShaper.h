// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_NUMERICSHAPER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_NUMERICSHAPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::font { class NumericShaper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::font::NumericShaper>
{
	static constexpr fixed_string class_name = "java/awt/font/NumericShaper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_NUMERICSHAPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_NUMERICSHAPER)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_NUMERICSHAPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/font/NumericShaper_Range.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::font::NumericShaper : public jni::object_base<"java/awt/font/NumericShaper",
	java::lang::Object,
	java::io::Serializable>
{
public:

	using Range = NumericShaper_Range;

	static jint EUROPEAN() { return get_static_field<"EUROPEAN", jint>(); }
	static jint ARABIC() { return get_static_field<"ARABIC", jint>(); }
	static jint EASTERN_ARABIC() { return get_static_field<"EASTERN_ARABIC", jint>(); }
	static jint DEVANAGARI() { return get_static_field<"DEVANAGARI", jint>(); }
	static jint BENGALI() { return get_static_field<"BENGALI", jint>(); }
	static jint GURMUKHI() { return get_static_field<"GURMUKHI", jint>(); }
	static jint GUJARATI() { return get_static_field<"GUJARATI", jint>(); }
	static jint ORIYA() { return get_static_field<"ORIYA", jint>(); }
	static jint TAMIL() { return get_static_field<"TAMIL", jint>(); }
	static jint TELUGU() { return get_static_field<"TELUGU", jint>(); }
	static jint KANNADA() { return get_static_field<"KANNADA", jint>(); }
	static jint MALAYALAM() { return get_static_field<"MALAYALAM", jint>(); }
	static jint THAI() { return get_static_field<"THAI", jint>(); }
	static jint LAO() { return get_static_field<"LAO", jint>(); }
	static jint TIBETAN() { return get_static_field<"TIBETAN", jint>(); }
	static jint MYANMAR() { return get_static_field<"MYANMAR", jint>(); }
	static jint ETHIOPIC() { return get_static_field<"ETHIOPIC", jint>(); }
	static jint KHMER() { return get_static_field<"KHMER", jint>(); }
	static jint MONGOLIAN() { return get_static_field<"MONGOLIAN", jint>(); }
	static jint ALL_RANGES() { return get_static_field<"ALL_RANGES", jint>(); }

	static jni::ref<java::awt::font::NumericShaper> getShaper(jint p1) { return call_static_method<"getShaper", jni::ref<java::awt::font::NumericShaper>>(p1); }
	static jni::ref<java::awt::font::NumericShaper> getShaper(jni::ref<java::awt::font::NumericShaper_Range> p1) { return call_static_method<"getShaper", jni::ref<java::awt::font::NumericShaper>>(p1); }
	static jni::ref<java::awt::font::NumericShaper> getContextualShaper(jint p1) { return call_static_method<"getContextualShaper", jni::ref<java::awt::font::NumericShaper>>(p1); }
	static jni::ref<java::awt::font::NumericShaper> getContextualShaper(jni::ref<java::util::Set> p1) { return call_static_method<"getContextualShaper", jni::ref<java::awt::font::NumericShaper>>(p1); }
	static jni::ref<java::awt::font::NumericShaper> getContextualShaper(jint p1, jint p2) { return call_static_method<"getContextualShaper", jni::ref<java::awt::font::NumericShaper>>(p1, p2); }
	static jni::ref<java::awt::font::NumericShaper> getContextualShaper(jni::ref<java::util::Set> p1, jni::ref<java::awt::font::NumericShaper_Range> p2) { return call_static_method<"getContextualShaper", jni::ref<java::awt::font::NumericShaper>>(p1, p2); }
	void shape(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"shape", void>(p1, p2, p3); }
	void shape(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jint p4) { return call_method<"shape", void>(p1, p2, p3, p4); }
	void shape(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jni::ref<java::awt::font::NumericShaper_Range> p4) { return call_method<"shape", void>(p1, p2, p3, p4); }
	jboolean isContextual() { return call_method<"isContextual", jboolean>(); }
	jint getRanges() { return call_method<"getRanges", jint>(); }
	jni::ref<java::util::Set> getRangeSet() { return call_method<"getRangeSet", jni::ref<java::util::Set>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NumericShaper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_NUMERICSHAPER