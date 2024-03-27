// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/javax/swing/tree/TreeSelectionModel.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTTREESELECTIONMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTTREESELECTIONMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::tree { class DefaultTreeSelectionModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::tree::DefaultTreeSelectionModel>
{
	static constexpr fixed_string class_name = "javax/swing/tree/DefaultTreeSelectionModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable, scapix::java_api::javax::swing::tree::TreeSelectionModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTTREESELECTIONMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTTREESELECTIONMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTTREESELECTIONMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/swing/event/TreeSelectionListener.h>
#include <scapix/java_api/javax/swing/tree/RowMapper.h>
#include <scapix/java_api/javax/swing/tree/TreePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::tree::DefaultTreeSelectionModel : public jni::object_base<"javax/swing/tree/DefaultTreeSelectionModel",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable,
	javax::swing::tree::TreeSelectionModel>
{
public:

	static jni::ref<java::lang::String> SELECTION_MODE_PROPERTY() { return get_static_field<"SELECTION_MODE_PROPERTY", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::tree::DefaultTreeSelectionModel> new_object() { return base_::new_object(); }
	void setRowMapper(jni::ref<javax::swing::tree::RowMapper> p1) { return call_method<"setRowMapper", void>(p1); }
	jni::ref<javax::swing::tree::RowMapper> getRowMapper() { return call_method<"getRowMapper", jni::ref<javax::swing::tree::RowMapper>>(); }
	void setSelectionMode(jint p1) { return call_method<"setSelectionMode", void>(p1); }
	jint getSelectionMode() { return call_method<"getSelectionMode", jint>(); }
	void setSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"setSelectionPath", void>(p1); }
	void setSelectionPaths(jni::ref<jni::array<javax::swing::tree::TreePath>> p1) { return call_method<"setSelectionPaths", void>(p1); }
	void addSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"addSelectionPath", void>(p1); }
	void addSelectionPaths(jni::ref<jni::array<javax::swing::tree::TreePath>> p1) { return call_method<"addSelectionPaths", void>(p1); }
	void removeSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"removeSelectionPath", void>(p1); }
	void removeSelectionPaths(jni::ref<jni::array<javax::swing::tree::TreePath>> p1) { return call_method<"removeSelectionPaths", void>(p1); }
	jni::ref<javax::swing::tree::TreePath> getSelectionPath() { return call_method<"getSelectionPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jni::ref<jni::array<javax::swing::tree::TreePath>> getSelectionPaths() { return call_method<"getSelectionPaths", jni::ref<jni::array<javax::swing::tree::TreePath>>>(); }
	jint getSelectionCount() { return call_method<"getSelectionCount", jint>(); }
	jboolean isPathSelected(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isPathSelected", jboolean>(p1); }
	jboolean isSelectionEmpty() { return call_method<"isSelectionEmpty", jboolean>(); }
	void clearSelection() { return call_method<"clearSelection", void>(); }
	void addTreeSelectionListener(jni::ref<javax::swing::event::TreeSelectionListener> p1) { return call_method<"addTreeSelectionListener", void>(p1); }
	void removeTreeSelectionListener(jni::ref<javax::swing::event::TreeSelectionListener> p1) { return call_method<"removeTreeSelectionListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::TreeSelectionListener>> getTreeSelectionListeners() { return call_method<"getTreeSelectionListeners", jni::ref<jni::array<javax::swing::event::TreeSelectionListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	jni::ref<jni::array<jint>> getSelectionRows() { return call_method<"getSelectionRows", jni::ref<jni::array<jint>>>(); }
	jint getMinSelectionRow() { return call_method<"getMinSelectionRow", jint>(); }
	jint getMaxSelectionRow() { return call_method<"getMaxSelectionRow", jint>(); }
	jboolean isRowSelected(jint p1) { return call_method<"isRowSelected", jboolean>(p1); }
	void resetRowSelection() { return call_method<"resetRowSelection", void>(); }
	jint getLeadSelectionRow() { return call_method<"getLeadSelectionRow", jint>(); }
	jni::ref<javax::swing::tree::TreePath> getLeadSelectionPath() { return call_method<"getLeadSelectionPath", jni::ref<javax::swing::tree::TreePath>>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners() { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	DefaultTreeSelectionModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_DEFAULTTREESELECTIONMODEL