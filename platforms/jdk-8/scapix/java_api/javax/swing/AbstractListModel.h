// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/ListModel.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTLISTMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTLISTMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class AbstractListModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::AbstractListModel>
{
	static constexpr fixed_string class_name = "javax/swing/AbstractListModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::ListModel, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTLISTMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTLISTMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTLISTMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/swing/event/ListDataListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::AbstractListModel : public jni::object_base<"javax/swing/AbstractListModel",
	java::lang::Object,
	javax::swing::ListModel,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::AbstractListModel> new_object() { return base_::new_object(); }
	void addListDataListener(jni::ref<javax::swing::event::ListDataListener> p1) { return call_method<"addListDataListener", void>(p1); }
	void removeListDataListener(jni::ref<javax::swing::event::ListDataListener> p1) { return call_method<"removeListDataListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ListDataListener>> getListDataListeners() { return call_method<"getListDataListeners", jni::ref<jni::array<javax::swing::event::ListDataListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }

protected:

	AbstractListModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTLISTMODEL
