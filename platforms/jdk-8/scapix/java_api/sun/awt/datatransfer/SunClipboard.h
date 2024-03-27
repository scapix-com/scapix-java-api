// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/datatransfer/Clipboard.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_SUNCLIPBOARD_FWD
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_SUNCLIPBOARD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::datatransfer { class SunClipboard; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::datatransfer::SunClipboard>
{
	static constexpr fixed_string class_name = "sun/awt/datatransfer/SunClipboard";
	using base_classes = std::tuple<scapix::java_api::java::awt::datatransfer::Clipboard, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_SUNCLIPBOARD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_SUNCLIPBOARD)
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_SUNCLIPBOARD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/ClipboardOwner.h>
#include <scapix/java_api/java/awt/datatransfer/DataFlavor.h>
#include <scapix/java_api/java/awt/datatransfer/FlavorListener.h>
#include <scapix/java_api/java/awt/datatransfer/FlavorTable.h>
#include <scapix/java_api/java/awt/datatransfer/Transferable.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::datatransfer::SunClipboard : public jni::object_base<"sun/awt/datatransfer/SunClipboard",
	java::awt::datatransfer::Clipboard,
	java::beans::PropertyChangeListener>
{
public:

	static jni::ref<sun::awt::datatransfer::SunClipboard> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	void setContents(jni::ref<java::awt::datatransfer::Transferable> p1, jni::ref<java::awt::datatransfer::ClipboardOwner> p2) { return call_method<"setContents", void>(p1, p2); }
	jni::ref<java::awt::datatransfer::Transferable> getContents(jni::ref<java::lang::Object> p1) { return call_method<"getContents", jni::ref<java::awt::datatransfer::Transferable>>(p1); }
	jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> getAvailableDataFlavors() { return call_method<"getAvailableDataFlavors", jni::ref<jni::array<java::awt::datatransfer::DataFlavor>>>(); }
	jboolean isDataFlavorAvailable(jni::ref<java::awt::datatransfer::DataFlavor> p1) { return call_method<"isDataFlavorAvailable", jboolean>(p1); }
	jni::ref<java::lang::Object> getData(jni::ref<java::awt::datatransfer::DataFlavor> p1) { return call_method<"getData", jni::ref<java::lang::Object>>(p1); }
	void openClipboard(jni::ref<sun::awt::datatransfer::SunClipboard> p1) { return call_method<"openClipboard", void>(p1); }
	void closeClipboard() { return call_method<"closeClipboard", void>(); }
	jlong getID() { return call_method<"getID", jlong>(); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void addFlavorListener(jni::ref<java::awt::datatransfer::FlavorListener> p1) { return call_method<"addFlavorListener", void>(p1); }
	void removeFlavorListener(jni::ref<java::awt::datatransfer::FlavorListener> p1) { return call_method<"removeFlavorListener", void>(p1); }
	jni::ref<jni::array<java::awt::datatransfer::FlavorListener>> getFlavorListeners() { return call_method<"getFlavorListeners", jni::ref<jni::array<java::awt::datatransfer::FlavorListener>>>(); }
	jboolean areFlavorListenersRegistered() { return call_method<"areFlavorListenersRegistered", jboolean>(); }
	static jni::ref<java::awt::datatransfer::FlavorTable> getDefaultFlavorTable() { return call_static_method<"getDefaultFlavorTable", jni::ref<java::awt::datatransfer::FlavorTable>>(); }

protected:

	SunClipboard(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_SUNCLIPBOARD