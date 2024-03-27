// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/animation/TypeConverter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_BIDIRECTIONALTYPECONVERTER_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_BIDIRECTIONALTYPECONVERTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class BidirectionalTypeConverter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::BidirectionalTypeConverter>
{
	static constexpr fixed_string class_name = "android/animation/BidirectionalTypeConverter";
	using base_classes = std::tuple<scapix::java_api::android::animation::TypeConverter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_BIDIRECTIONALTYPECONVERTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_BIDIRECTIONALTYPECONVERTER)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_BIDIRECTIONALTYPECONVERTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::BidirectionalTypeConverter : public jni::object_base<"android/animation/BidirectionalTypeConverter",
	android::animation::TypeConverter>
{
public:

	static jni::ref<android::animation::BidirectionalTypeConverter> new_object(jni::ref<java::lang::Class> fromClass, jni::ref<java::lang::Class> toClass) { return base_::new_object(fromClass, toClass); }
	jni::ref<java::lang::Object> convertBack(jni::ref<java::lang::Object> p1) { return call_method<"convertBack", jni::ref<java::lang::Object>>(p1); }
	jni::ref<android::animation::BidirectionalTypeConverter> invert() { return call_method<"invert", jni::ref<android::animation::BidirectionalTypeConverter>>(); }

protected:

	BidirectionalTypeConverter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_BIDIRECTIONALTYPECONVERTER