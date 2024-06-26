// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SPINNERMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SPINNERMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SpinnerModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SpinnerModel>
{
	static constexpr fixed_string class_name = "javax/swing/SpinnerModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPINNERMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SPINNERMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_SPINNERMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::SpinnerModel : public jni::object_base<"javax/swing/SpinnerModel",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	void setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", void>(p1); }
	jni::ref<java::lang::Object> getNextValue() { return call_method<"getNextValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getPreviousValue() { return call_method<"getPreviousValue", jni::ref<java::lang::Object>>(); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }

protected:

	SpinnerModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPINNERMODEL
