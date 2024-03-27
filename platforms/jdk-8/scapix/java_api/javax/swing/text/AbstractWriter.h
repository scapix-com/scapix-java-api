// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTWRITER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class AbstractWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::AbstractWriter>
{
	static constexpr fixed_string class_name = "javax/swing/text/AbstractWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTWRITER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::AbstractWriter : public jni::object_base<"javax/swing/text/AbstractWriter",
	java::lang::Object>
{
public:

	jint getStartOffset() { return call_method<"getStartOffset", jint>(); }
	jint getEndOffset() { return call_method<"getEndOffset", jint>(); }
	void setLineSeparator(jni::ref<java::lang::String> p1) { return call_method<"setLineSeparator", void>(p1); }
	jni::ref<java::lang::String> getLineSeparator() { return call_method<"getLineSeparator", jni::ref<java::lang::String>>(); }

protected:

	AbstractWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTWRITER
