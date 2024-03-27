// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/colorchooser/ColorModel.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORMODELHSL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORMODELHSL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::colorchooser { class ColorModelHSL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::colorchooser::ColorModelHSL>
{
	static constexpr fixed_string class_name = "javax/swing/colorchooser/ColorModelHSL";
	using base_classes = std::tuple<scapix::java_api::javax::swing::colorchooser::ColorModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORMODELHSL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORMODELHSL)
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORMODELHSL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::colorchooser::ColorModelHSL : public jni::object_base<"javax/swing/colorchooser/ColorModelHSL",
	javax::swing::colorchooser::ColorModel>
{
public:


protected:

	ColorModelHSL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORMODELHSL