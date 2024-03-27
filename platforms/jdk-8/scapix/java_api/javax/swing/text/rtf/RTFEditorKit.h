// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/StyledEditorKit.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFEDITORKIT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFEDITORKIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::rtf { class RTFEditorKit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::rtf::RTFEditorKit>
{
	static constexpr fixed_string class_name = "javax/swing/text/rtf/RTFEditorKit";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::StyledEditorKit>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFEDITORKIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFEDITORKIT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFEDITORKIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/Document.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::rtf::RTFEditorKit : public jni::object_base<"javax/swing/text/rtf/RTFEditorKit",
	javax::swing::text::StyledEditorKit>
{
public:

	static jni::ref<javax::swing::text::rtf::RTFEditorKit> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	void read(jni::ref<java::io::InputStream> p1, jni::ref<javax::swing::text::Document> p2, jint p3) { return call_method<"read", void>(p1, p2, p3); }
	void write(jni::ref<java::io::OutputStream> p1, jni::ref<javax::swing::text::Document> p2, jint p3, jint p4) { return call_method<"write", void>(p1, p2, p3, p4); }
	void read(jni::ref<java::io::Reader> p1, jni::ref<javax::swing::text::Document> p2, jint p3) { return call_method<"read", void>(p1, p2, p3); }
	void write(jni::ref<java::io::Writer> p1, jni::ref<javax::swing::text::Document> p2, jint p3, jint p4) { return call_method<"write", void>(p1, p2, p3, p4); }

protected:

	RTFEditorKit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFEDITORKIT