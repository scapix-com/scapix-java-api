// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractSpinnerModel.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SPINNERDATEMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SPINNERDATEMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SpinnerDateModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SpinnerDateModel>
{
	static constexpr fixed_string class_name = "javax/swing/SpinnerDateModel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractSpinnerModel, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPINNERDATEMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SPINNERDATEMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_SPINNERDATEMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Date.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::SpinnerDateModel : public jni::object_base<"javax/swing/SpinnerDateModel",
	javax::swing::AbstractSpinnerModel,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::SpinnerDateModel> new_object(jni::ref<java::util::Date> p1, jni::ref<java::lang::Comparable> p2, jni::ref<java::lang::Comparable> p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<javax::swing::SpinnerDateModel> new_object() { return base_::new_object(); }
	void setStart(jni::ref<java::lang::Comparable> p1) { return call_method<"setStart", void>(p1); }
	jni::ref<java::lang::Comparable> getStart() { return call_method<"getStart", jni::ref<java::lang::Comparable>>(); }
	void setEnd(jni::ref<java::lang::Comparable> p1) { return call_method<"setEnd", void>(p1); }
	jni::ref<java::lang::Comparable> getEnd() { return call_method<"getEnd", jni::ref<java::lang::Comparable>>(); }
	void setCalendarField(jint p1) { return call_method<"setCalendarField", void>(p1); }
	jint getCalendarField() { return call_method<"getCalendarField", jint>(); }
	jni::ref<java::lang::Object> getNextValue() { return call_method<"getNextValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getPreviousValue() { return call_method<"getPreviousValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::Date> getDate() { return call_method<"getDate", jni::ref<java::util::Date>>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	void setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", void>(p1); }

protected:

	SpinnerDateModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPINNERDATEMODEL
