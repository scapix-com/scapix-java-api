// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/applet/Applet_AccessibleApplet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JAPPLET_ACCESSIBLEJAPPLET_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JAPPLET_ACCESSIBLEJAPPLET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JApplet_AccessibleJApplet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JApplet_AccessibleJApplet>
{
	static constexpr fixed_string class_name = "javax/swing/JApplet$AccessibleJApplet";
	using base_classes = std::tuple<scapix::java_api::java::applet::Applet_AccessibleApplet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JAPPLET_ACCESSIBLEJAPPLET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JAPPLET_ACCESSIBLEJAPPLET)
#define SCAPIX_JAVA_API_JAVAX_SWING_JAPPLET_ACCESSIBLEJAPPLET

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JApplet_AccessibleJApplet : public jni::object_base<"javax/swing/JApplet$AccessibleJApplet",
	java::applet::Applet_AccessibleApplet>
{
public:


protected:

	JApplet_AccessibleJApplet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JAPPLET_ACCESSIBLEJAPPLET