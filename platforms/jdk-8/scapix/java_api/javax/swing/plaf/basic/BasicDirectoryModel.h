// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractListModel.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDIRECTORYMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDIRECTORYMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicDirectoryModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicDirectoryModel>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicDirectoryModel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractListModel, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDIRECTORYMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDIRECTORYMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDIRECTORYMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/javax/swing/JFileChooser.h>
#include <scapix/java_api/javax/swing/event/ListDataEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicDirectoryModel : public jni::object_base<"javax/swing/plaf/basic/BasicDirectoryModel",
	javax::swing::AbstractListModel,
	java::beans::PropertyChangeListener>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicDirectoryModel> new_object(jni::ref<javax::swing::JFileChooser> p1) { return base_::new_object(p1); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void invalidateFileCache() { return call_method<"invalidateFileCache", void>(); }
	jni::ref<java::util::Vector> getDirectories() { return call_method<"getDirectories", jni::ref<java::util::Vector>>(); }
	jni::ref<java::util::Vector> getFiles() { return call_method<"getFiles", jni::ref<java::util::Vector>>(); }
	void validateFileCache() { return call_method<"validateFileCache", void>(); }
	jboolean renameFile(jni::ref<java::io::File> p1, jni::ref<java::io::File> p2) { return call_method<"renameFile", jboolean>(p1, p2); }
	void fireContentsChanged() { return call_method<"fireContentsChanged", void>(); }
	jint getSize() { return call_method<"getSize", jint>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jint indexOf(jni::ref<java::lang::Object> p1) { return call_method<"indexOf", jint>(p1); }
	jni::ref<java::lang::Object> getElementAt(jint p1) { return call_method<"getElementAt", jni::ref<java::lang::Object>>(p1); }
	void intervalAdded(jni::ref<javax::swing::event::ListDataEvent> p1) { return call_method<"intervalAdded", void>(p1); }
	void intervalRemoved(jni::ref<javax::swing::event::ListDataEvent> p1) { return call_method<"intervalRemoved", void>(p1); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners() { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(); }

protected:

	BasicDirectoryModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDIRECTORYMODEL