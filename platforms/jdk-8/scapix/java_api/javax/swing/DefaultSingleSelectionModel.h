// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/SingleSelectionModel.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTSINGLESELECTIONMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTSINGLESELECTIONMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class DefaultSingleSelectionModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::DefaultSingleSelectionModel>
{
	static constexpr fixed_string class_name = "javax/swing/DefaultSingleSelectionModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::SingleSelectionModel, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTSINGLESELECTIONMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTSINGLESELECTIONMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTSINGLESELECTIONMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::DefaultSingleSelectionModel : public jni::object_base<"javax/swing/DefaultSingleSelectionModel",
	java::lang::Object,
	javax::swing::SingleSelectionModel,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::DefaultSingleSelectionModel> new_object() { return base_::new_object(); }
	jint getSelectedIndex() { return call_method<"getSelectedIndex", jint>(); }
	void setSelectedIndex(jint p1) { return call_method<"setSelectedIndex", void>(p1); }
	void clearSelection() { return call_method<"clearSelection", void>(); }
	jboolean isSelected() { return call_method<"isSelected", jboolean>(); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ChangeListener>> getChangeListeners() { return call_method<"getChangeListeners", jni::ref<jni::array<javax::swing::event::ChangeListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }

protected:

	DefaultSingleSelectionModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTSINGLESELECTIONMODEL
