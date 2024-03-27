// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Externalizable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_DATAFLAVOR_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_DATAFLAVOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::datatransfer { class DataFlavor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::datatransfer::DataFlavor>
{
	static constexpr fixed_string class_name = "java/awt/datatransfer/DataFlavor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Externalizable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_DATAFLAVOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_DATAFLAVOR)
#define SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_DATAFLAVOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/Transferable.h>
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::datatransfer::DataFlavor : public jni::object_base<"java/awt/datatransfer/DataFlavor",
	java::lang::Object,
	java::io::Externalizable,
	java::lang::Cloneable>
{
public:

	static jni::ref<java::awt::datatransfer::DataFlavor> stringFlavor() { return get_static_field<"stringFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static jni::ref<java::awt::datatransfer::DataFlavor> imageFlavor() { return get_static_field<"imageFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static jni::ref<java::awt::datatransfer::DataFlavor> plainTextFlavor() { return get_static_field<"plainTextFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static jni::ref<java::lang::String> javaSerializedObjectMimeType() { return get_static_field<"javaSerializedObjectMimeType", jni::ref<java::lang::String>>(); }
	static jni::ref<java::awt::datatransfer::DataFlavor> javaFileListFlavor() { return get_static_field<"javaFileListFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static jni::ref<java::lang::String> javaJVMLocalObjectMimeType() { return get_static_field<"javaJVMLocalObjectMimeType", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> javaRemoteObjectMimeType() { return get_static_field<"javaRemoteObjectMimeType", jni::ref<java::lang::String>>(); }
	static jni::ref<java::awt::datatransfer::DataFlavor> selectionHtmlFlavor() { return get_static_field<"selectionHtmlFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static void selectionHtmlFlavor(jni::ref<java::awt::datatransfer::DataFlavor> v) { set_static_field<"selectionHtmlFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(v); }
	static jni::ref<java::awt::datatransfer::DataFlavor> fragmentHtmlFlavor() { return get_static_field<"fragmentHtmlFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static void fragmentHtmlFlavor(jni::ref<java::awt::datatransfer::DataFlavor> v) { set_static_field<"fragmentHtmlFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(v); }
	static jni::ref<java::awt::datatransfer::DataFlavor> allHtmlFlavor() { return get_static_field<"allHtmlFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static void allHtmlFlavor(jni::ref<java::awt::datatransfer::DataFlavor> v) { set_static_field<"allHtmlFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(v); }

	static jni::ref<java::awt::datatransfer::DataFlavor> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::datatransfer::DataFlavor> new_object(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::datatransfer::DataFlavor> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::datatransfer::DataFlavor> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::ClassLoader> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::awt::datatransfer::DataFlavor> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::awt::datatransfer::DataFlavor> getTextPlainUnicodeFlavor() { return call_static_method<"getTextPlainUnicodeFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(); }
	static jni::ref<java::awt::datatransfer::DataFlavor> selectBestTextFlavor(jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> p1) { return call_static_method<"selectBestTextFlavor", jni::ref<java::awt::datatransfer::DataFlavor>>(p1); }
	jni::ref<java::io::Reader> getReaderForText(jni::ref<java::awt::datatransfer::Transferable> p1) { return call_method<"getReaderForText", jni::ref<java::io::Reader>>(p1); }
	jni::ref<java::lang::String> getMimeType() { return call_method<"getMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> getRepresentationClass() { return call_method<"getRepresentationClass", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getHumanPresentableName() { return call_method<"getHumanPresentableName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPrimaryType() { return call_method<"getPrimaryType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSubType() { return call_method<"getSubType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getParameter(jni::ref<java::lang::String> p1) { return call_method<"getParameter", jni::ref<java::lang::String>>(p1); }
	void setHumanPresentableName(jni::ref<java::lang::String> p1) { return call_method<"setHumanPresentableName", void>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<java::awt::datatransfer::DataFlavor> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::String> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean match(jni::ref<java::awt::datatransfer::DataFlavor> p1) { return call_method<"match", jboolean>(p1); }
	jboolean isMimeTypeEqual(jni::ref<java::lang::String> p1) { return call_method<"isMimeTypeEqual", jboolean>(p1); }
	jboolean isMimeTypeEqual(jni::ref<java::awt::datatransfer::DataFlavor> p1) { return call_method<"isMimeTypeEqual", jboolean>(p1); }
	jboolean isMimeTypeSerializedObject() { return call_method<"isMimeTypeSerializedObject", jboolean>(); }
	jni::ref<java::lang::Class> getDefaultRepresentationClass() { return call_method<"getDefaultRepresentationClass", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getDefaultRepresentationClassAsString() { return call_method<"getDefaultRepresentationClassAsString", jni::ref<java::lang::String>>(); }
	jboolean isRepresentationClassInputStream() { return call_method<"isRepresentationClassInputStream", jboolean>(); }
	jboolean isRepresentationClassReader() { return call_method<"isRepresentationClassReader", jboolean>(); }
	jboolean isRepresentationClassCharBuffer() { return call_method<"isRepresentationClassCharBuffer", jboolean>(); }
	jboolean isRepresentationClassByteBuffer() { return call_method<"isRepresentationClassByteBuffer", jboolean>(); }
	jboolean isRepresentationClassSerializable() { return call_method<"isRepresentationClassSerializable", jboolean>(); }
	jboolean isRepresentationClassRemote() { return call_method<"isRepresentationClassRemote", jboolean>(); }
	jboolean isFlavorSerializedObjectType() { return call_method<"isFlavorSerializedObjectType", jboolean>(); }
	jboolean isFlavorRemoteObjectType() { return call_method<"isFlavorRemoteObjectType", jboolean>(); }
	jboolean isFlavorJavaFileListType() { return call_method<"isFlavorJavaFileListType", jboolean>(); }
	jboolean isFlavorTextType() { return call_method<"isFlavorTextType", jboolean>(); }
	void writeExternal(jni::ref<java::io::ObjectOutput> p1) { return call_method<"writeExternal", void>(p1); }
	void readExternal(jni::ref<java::io::ObjectInput> p1) { return call_method<"readExternal", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	DataFlavor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_DATAFLAVOR