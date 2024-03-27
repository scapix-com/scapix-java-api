// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/animation/ValueAnimator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_OBJECTANIMATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_OBJECTANIMATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class ObjectAnimator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::ObjectAnimator>
{
	static constexpr fixed_string class_name = "android/animation/ObjectAnimator";
	using base_classes = std::tuple<scapix::java_api::android::animation::ValueAnimator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_OBJECTANIMATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_OBJECTANIMATOR)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_OBJECTANIMATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/animation/PropertyValuesHolder.h>
#include <scapix/java_api/android/animation/TypeConverter.h>
#include <scapix/java_api/android/animation/TypeEvaluator.h>
#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/util/Property.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::ObjectAnimator : public jni::object_base<"android/animation/ObjectAnimator",
	android::animation::ValueAnimator>
{
public:

	static jni::ref<android::animation::ObjectAnimator> new_object() { return base_::new_object(); }
	void setPropertyName(jni::ref<java::lang::String> propertyName) { return call_method<"setPropertyName", void>(propertyName); }
	void setProperty(jni::ref<android::util::Property> property) { return call_method<"setProperty", void>(property); }
	jni::ref<java::lang::String> getPropertyName() { return call_method<"getPropertyName", jni::ref<java::lang::String>>(); }
	static jni::ref<android::animation::ObjectAnimator> ofInt(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<jni::array<jint>> values) { return call_static_method<"ofInt", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, values); }
	static jni::ref<android::animation::ObjectAnimator> ofInt(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> xPropertyName, jni::ref<java::lang::String> yPropertyName, jni::ref<android::graphics::Path> path) { return call_static_method<"ofInt", jni::ref<android::animation::ObjectAnimator>>(target, xPropertyName, yPropertyName, path); }
	static jni::ref<android::animation::ObjectAnimator> ofInt(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> property, jni::ref<jni::array<jint>> values) { return call_static_method<"ofInt", jni::ref<android::animation::ObjectAnimator>>(target, property, values); }
	static jni::ref<android::animation::ObjectAnimator> ofInt(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> xProperty, jni::ref<android::util::Property> yProperty, jni::ref<android::graphics::Path> path) { return call_static_method<"ofInt", jni::ref<android::animation::ObjectAnimator>>(target, xProperty, yProperty, path); }
	static jni::ref<android::animation::ObjectAnimator> ofMultiInt(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<jni::array<jni::array<jint>>> values) { return call_static_method<"ofMultiInt", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, values); }
	static jni::ref<android::animation::ObjectAnimator> ofMultiInt(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<android::graphics::Path> path) { return call_static_method<"ofMultiInt", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, path); }
	static jni::ref<android::animation::ObjectAnimator> ofMultiInt(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<android::animation::TypeConverter> converter, jni::ref<android::animation::TypeEvaluator> evaluator, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"ofMultiInt", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, converter, evaluator, values); }
	static jni::ref<android::animation::ObjectAnimator> ofArgb(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<jni::array<jint>> values) { return call_static_method<"ofArgb", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, values); }
	static jni::ref<android::animation::ObjectAnimator> ofArgb(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> property, jni::ref<jni::array<jint>> values) { return call_static_method<"ofArgb", jni::ref<android::animation::ObjectAnimator>>(target, property, values); }
	static jni::ref<android::animation::ObjectAnimator> ofFloat(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<jni::array<jfloat>> values) { return call_static_method<"ofFloat", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, values); }
	static jni::ref<android::animation::ObjectAnimator> ofFloat(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> xPropertyName, jni::ref<java::lang::String> yPropertyName, jni::ref<android::graphics::Path> path) { return call_static_method<"ofFloat", jni::ref<android::animation::ObjectAnimator>>(target, xPropertyName, yPropertyName, path); }
	static jni::ref<android::animation::ObjectAnimator> ofFloat(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> property, jni::ref<jni::array<jfloat>> values) { return call_static_method<"ofFloat", jni::ref<android::animation::ObjectAnimator>>(target, property, values); }
	static jni::ref<android::animation::ObjectAnimator> ofFloat(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> xProperty, jni::ref<android::util::Property> yProperty, jni::ref<android::graphics::Path> path) { return call_static_method<"ofFloat", jni::ref<android::animation::ObjectAnimator>>(target, xProperty, yProperty, path); }
	static jni::ref<android::animation::ObjectAnimator> ofMultiFloat(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<jni::array<jni::array<jfloat>>> values) { return call_static_method<"ofMultiFloat", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, values); }
	static jni::ref<android::animation::ObjectAnimator> ofMultiFloat(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<android::graphics::Path> path) { return call_static_method<"ofMultiFloat", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, path); }
	static jni::ref<android::animation::ObjectAnimator> ofMultiFloat(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<android::animation::TypeConverter> converter, jni::ref<android::animation::TypeEvaluator> evaluator, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"ofMultiFloat", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, converter, evaluator, values); }
	static jni::ref<android::animation::ObjectAnimator> ofObject(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<android::animation::TypeEvaluator> evaluator, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"ofObject", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, evaluator, values); }
	static jni::ref<android::animation::ObjectAnimator> ofObject(jni::ref<java::lang::Object> target, jni::ref<java::lang::String> propertyName, jni::ref<android::animation::TypeConverter> converter, jni::ref<android::graphics::Path> path) { return call_static_method<"ofObject", jni::ref<android::animation::ObjectAnimator>>(target, propertyName, converter, path); }
	static jni::ref<android::animation::ObjectAnimator> ofObject(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> property, jni::ref<android::animation::TypeEvaluator> evaluator, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"ofObject", jni::ref<android::animation::ObjectAnimator>>(target, property, evaluator, values); }
	static jni::ref<android::animation::ObjectAnimator> ofObject(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> property, jni::ref<android::animation::TypeConverter> converter, jni::ref<android::animation::TypeEvaluator> evaluator, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"ofObject", jni::ref<android::animation::ObjectAnimator>>(target, property, converter, evaluator, values); }
	static jni::ref<android::animation::ObjectAnimator> ofObject(jni::ref<java::lang::Object> target, jni::ref<android::util::Property> property, jni::ref<android::animation::TypeConverter> converter, jni::ref<android::graphics::Path> path) { return call_static_method<"ofObject", jni::ref<android::animation::ObjectAnimator>>(target, property, converter, path); }
	static jni::ref<android::animation::ObjectAnimator> ofPropertyValuesHolder(jni::ref<java::lang::Object> target, jni::ref<jni::array<android::animation::PropertyValuesHolder>> values) { return call_static_method<"ofPropertyValuesHolder", jni::ref<android::animation::ObjectAnimator>>(target, values); }
	void setIntValues(jni::ref<jni::array<jint>> values) { return call_method<"setIntValues", void>(values); }
	void setFloatValues(jni::ref<jni::array<jfloat>> values) { return call_method<"setFloatValues", void>(values); }
	void setObjectValues(jni::ref<jni::array<java::lang::Object>> values) { return call_method<"setObjectValues", void>(values); }
	void setAutoCancel(jboolean cancel) { return call_method<"setAutoCancel", void>(cancel); }
	void start() { return call_method<"start", void>(); }
	jni::ref<android::animation::ObjectAnimator> setDuration(jlong duration) { return call_method<"setDuration", jni::ref<android::animation::ObjectAnimator>>(duration); }
	jni::ref<java::lang::Object> getTarget() { return call_method<"getTarget", jni::ref<java::lang::Object>>(); }
	void setTarget(jni::ref<java::lang::Object> target) { return call_method<"setTarget", void>(target); }
	void setupStartValues() { return call_method<"setupStartValues", void>(); }
	void setupEndValues() { return call_method<"setupEndValues", void>(); }
	jni::ref<android::animation::ObjectAnimator> clone() { return call_method<"clone", jni::ref<android::animation::ObjectAnimator>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ObjectAnimator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_OBJECTANIMATOR