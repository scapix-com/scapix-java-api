// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_WINDOWCONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_WINDOWCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class WindowConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::WindowConstants>
{
	static constexpr fixed_string class_name = "javax/swing/WindowConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_WINDOWCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_WINDOWCONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_SWING_WINDOWCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::WindowConstants : public jni::object_base<"javax/swing/WindowConstants",
	java::lang::Object>
{
public:

	static jint DO_NOTHING_ON_CLOSE() { return get_static_field<"DO_NOTHING_ON_CLOSE", jint>(); }
	static jint HIDE_ON_CLOSE() { return get_static_field<"HIDE_ON_CLOSE", jint>(); }
	static jint DISPOSE_ON_CLOSE() { return get_static_field<"DISPOSE_ON_CLOSE", jint>(); }
	static jint EXIT_ON_CLOSE() { return get_static_field<"EXIT_ON_CLOSE", jint>(); }


protected:

	WindowConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_WINDOWCONSTANTS
