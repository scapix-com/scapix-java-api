// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractListModel.h>
#include <scapix/java_api/javax/swing/ComboBoxModel.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXMODEL_FWD
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing::plaf::synth { class SynthFileChooserUIImpl_DirectoryComboBoxModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::plaf::synth::SynthFileChooserUIImpl_DirectoryComboBoxModel>
{
	static constexpr fixed_string class_name = "sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxModel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractListModel, scapix::java_api::javax::swing::ComboBoxModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXMODEL)
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::plaf::synth::SynthFileChooserUIImpl_DirectoryComboBoxModel : public jni::object_base<"sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxModel",
	javax::swing::AbstractListModel,
	javax::swing::ComboBoxModel>
{
public:

	static jni::ref<sun::swing::plaf::synth::SynthFileChooserUIImpl_DirectoryComboBoxModel> new_object(jni::ref<sun::swing::plaf::synth::SynthFileChooserUIImpl> p1) { return base_::new_object(p1); }
	void addItem(jni::ref<java::io::File> p1) { return call_method<"addItem", void>(p1); }
	jint getDepth(jint p1) { return call_method<"getDepth", jint>(p1); }
	void setSelectedItem(jni::ref<java::lang::Object> p1) { return call_method<"setSelectedItem", void>(p1); }
	jni::ref<java::lang::Object> getSelectedItem() { return call_method<"getSelectedItem", jni::ref<java::lang::Object>>(); }
	jint getSize() { return call_method<"getSize", jint>(); }
	jni::ref<java::io::File> getElementAt(jint p1) { return call_method<"getElementAt", jni::ref<java::io::File>>(p1); }

protected:

	SynthFileChooserUIImpl_DirectoryComboBoxModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXMODEL
