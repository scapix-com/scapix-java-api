// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_APPLET_RESOURCES_MSGAPPLETVIEWER_ZH_CN_FWD
#define SCAPIX_JAVA_API_SUN_APPLET_RESOURCES_MSGAPPLETVIEWER_ZH_CN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::applet::resources { class MsgAppletViewer_zh_CN; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::applet::resources::MsgAppletViewer_zh_CN>
{
	static constexpr fixed_string class_name = "sun/applet/resources/MsgAppletViewer_zh_CN";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_RESOURCES_MSGAPPLETVIEWER_ZH_CN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_APPLET_RESOURCES_MSGAPPLETVIEWER_ZH_CN)
#define SCAPIX_JAVA_API_SUN_APPLET_RESOURCES_MSGAPPLETVIEWER_ZH_CN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::applet::resources::MsgAppletViewer_zh_CN : public jni::object_base<"sun/applet/resources/MsgAppletViewer_zh_CN",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::applet::resources::MsgAppletViewer_zh_CN> new_object() { return base_::new_object(); }
	jni::ref<jni::array<jni::array<java::lang::Object>>> getContents() { return call_method<"getContents", jni::ref<jni::array<jni::array<java::lang::Object>>>>(); }

protected:

	MsgAppletViewer_zh_CN(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_APPLET_RESOURCES_MSGAPPLETVIEWER_ZH_CN