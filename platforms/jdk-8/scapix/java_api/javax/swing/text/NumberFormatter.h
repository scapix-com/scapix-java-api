// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/InternationalFormatter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_NUMBERFORMATTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_NUMBERFORMATTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class NumberFormatter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::NumberFormatter>
{
	static constexpr fixed_string class_name = "javax/swing/text/NumberFormatter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::InternationalFormatter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_NUMBERFORMATTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_NUMBERFORMATTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_NUMBERFORMATTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/text/Format.h>
#include <scapix/java_api/java/text/NumberFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::NumberFormatter : public jni::object_base<"javax/swing/text/NumberFormatter",
	javax::swing::text::InternationalFormatter>
{
public:

	static jni::ref<javax::swing::text::NumberFormatter> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::text::NumberFormatter> new_object(jni::ref<java::text::NumberFormat> p1) { return base_::new_object(p1); }
	void setFormat(jni::ref<java::text::Format> p1) { return call_method<"setFormat", void>(p1); }

protected:

	NumberFormatter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_NUMBERFORMATTER
