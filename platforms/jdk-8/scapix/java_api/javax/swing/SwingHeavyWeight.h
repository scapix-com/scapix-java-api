// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SWINGHEAVYWEIGHT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGHEAVYWEIGHT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SwingHeavyWeight; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SwingHeavyWeight>
{
	static constexpr fixed_string class_name = "javax/swing/SwingHeavyWeight";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGHEAVYWEIGHT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SWINGHEAVYWEIGHT)
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGHEAVYWEIGHT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::SwingHeavyWeight : public jni::object_base<"javax/swing/SwingHeavyWeight",
	java::lang::Object>
{
public:


protected:

	SwingHeavyWeight(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGHEAVYWEIGHT