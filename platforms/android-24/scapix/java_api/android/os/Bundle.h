// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/os/BaseBundle.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_BUNDLE_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_BUNDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Bundle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Bundle>
{
	static constexpr fixed_string class_name = "android/os/Bundle";
	using base_classes = std::tuple<scapix::java_api::android::os::BaseBundle, scapix::java_api::java::lang::Cloneable, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_BUNDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_BUNDLE)
#define SCAPIX_JAVA_API_ANDROID_OS_BUNDLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/util/Size.h>
#include <scapix/java_api/android/util/SizeF.h>
#include <scapix/java_api/android/util/SparseArray.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Byte.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Bundle : public jni::object_base<"android/os/Bundle",
	android::os::BaseBundle,
	java::lang::Cloneable,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<android::os::Bundle> EMPTY() { return get_static_field<"EMPTY", jni::ref<android::os::Bundle>>(); }

	static jni::ref<android::os::Bundle> new_object() { return base_::new_object(); }
	static jni::ref<android::os::Bundle> new_object(jni::ref<java::lang::ClassLoader> loader) { return base_::new_object(loader); }
	static jni::ref<android::os::Bundle> new_object(jint capacity) { return base_::new_object(capacity); }
	static jni::ref<android::os::Bundle> new_object(jni::ref<android::os::Bundle> b) { return base_::new_object(b); }
	static jni::ref<android::os::Bundle> new_object(jni::ref<android::os::PersistableBundle> b) { return base_::new_object(b); }
	void setClassLoader(jni::ref<java::lang::ClassLoader> loader) { return call_method<"setClassLoader", void>(loader); }
	jni::ref<java::lang::ClassLoader> getClassLoader() { return call_method<"getClassLoader", jni::ref<java::lang::ClassLoader>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	void clear() { return call_method<"clear", void>(); }
	void remove(jni::ref<java::lang::String> key) { return call_method<"remove", void>(key); }
	void putAll(jni::ref<android::os::Bundle> bundle) { return call_method<"putAll", void>(bundle); }
	jboolean hasFileDescriptors() { return call_method<"hasFileDescriptors", jboolean>(); }
	void putByte(jni::ref<java::lang::String> key, jbyte value) { return call_method<"putByte", void>(key, value); }
	void putChar(jni::ref<java::lang::String> key, jchar value) { return call_method<"putChar", void>(key, value); }
	void putShort(jni::ref<java::lang::String> key, jshort value) { return call_method<"putShort", void>(key, value); }
	void putFloat(jni::ref<java::lang::String> key, jfloat value) { return call_method<"putFloat", void>(key, value); }
	void putCharSequence(jni::ref<java::lang::String> key, jni::ref<java::lang::CharSequence> value) { return call_method<"putCharSequence", void>(key, value); }
	void putParcelable(jni::ref<java::lang::String> key, jni::ref<android::os::Parcelable> value) { return call_method<"putParcelable", void>(key, value); }
	void putSize(jni::ref<java::lang::String> key, jni::ref<android::util::Size> value) { return call_method<"putSize", void>(key, value); }
	void putSizeF(jni::ref<java::lang::String> key, jni::ref<android::util::SizeF> value) { return call_method<"putSizeF", void>(key, value); }
	void putParcelableArray(jni::ref<java::lang::String> key, jni::ref<jni::array<android::os::Parcelable>> value) { return call_method<"putParcelableArray", void>(key, value); }
	void putParcelableArrayList(jni::ref<java::lang::String> key, jni::ref<java::util::ArrayList> value) { return call_method<"putParcelableArrayList", void>(key, value); }
	void putSparseParcelableArray(jni::ref<java::lang::String> key, jni::ref<android::util::SparseArray> value) { return call_method<"putSparseParcelableArray", void>(key, value); }
	void putIntegerArrayList(jni::ref<java::lang::String> key, jni::ref<java::util::ArrayList> value) { return call_method<"putIntegerArrayList", void>(key, value); }
	void putStringArrayList(jni::ref<java::lang::String> key, jni::ref<java::util::ArrayList> value) { return call_method<"putStringArrayList", void>(key, value); }
	void putCharSequenceArrayList(jni::ref<java::lang::String> key, jni::ref<java::util::ArrayList> value) { return call_method<"putCharSequenceArrayList", void>(key, value); }
	void putSerializable(jni::ref<java::lang::String> key, jni::ref<java::io::Serializable> value) { return call_method<"putSerializable", void>(key, value); }
	void putByteArray(jni::ref<java::lang::String> key, jni::ref<jni::array<jbyte>> value) { return call_method<"putByteArray", void>(key, value); }
	void putShortArray(jni::ref<java::lang::String> key, jni::ref<jni::array<jshort>> value) { return call_method<"putShortArray", void>(key, value); }
	void putCharArray(jni::ref<java::lang::String> key, jni::ref<jni::array<jchar>> value) { return call_method<"putCharArray", void>(key, value); }
	void putFloatArray(jni::ref<java::lang::String> key, jni::ref<jni::array<jfloat>> value) { return call_method<"putFloatArray", void>(key, value); }
	void putCharSequenceArray(jni::ref<java::lang::String> key, jni::ref<jni::array<java::lang::CharSequence>> value) { return call_method<"putCharSequenceArray", void>(key, value); }
	void putBundle(jni::ref<java::lang::String> key, jni::ref<android::os::Bundle> value) { return call_method<"putBundle", void>(key, value); }
	void putBinder(jni::ref<java::lang::String> key, jni::ref<android::os::IBinder> value) { return call_method<"putBinder", void>(key, value); }
	jbyte getByte(jni::ref<java::lang::String> key) { return call_method<"getByte", jbyte>(key); }
	jni::ref<java::lang::Byte> getByte(jni::ref<java::lang::String> key, jbyte defaultValue) { return call_method<"getByte", jni::ref<java::lang::Byte>>(key, defaultValue); }
	jchar getChar(jni::ref<java::lang::String> key) { return call_method<"getChar", jchar>(key); }
	jchar getChar(jni::ref<java::lang::String> key, jchar defaultValue) { return call_method<"getChar", jchar>(key, defaultValue); }
	jshort getShort(jni::ref<java::lang::String> key) { return call_method<"getShort", jshort>(key); }
	jshort getShort(jni::ref<java::lang::String> key, jshort defaultValue) { return call_method<"getShort", jshort>(key, defaultValue); }
	jfloat getFloat(jni::ref<java::lang::String> key) { return call_method<"getFloat", jfloat>(key); }
	jfloat getFloat(jni::ref<java::lang::String> key, jfloat defaultValue) { return call_method<"getFloat", jfloat>(key, defaultValue); }
	jni::ref<java::lang::CharSequence> getCharSequence(jni::ref<java::lang::String> key) { return call_method<"getCharSequence", jni::ref<java::lang::CharSequence>>(key); }
	jni::ref<java::lang::CharSequence> getCharSequence(jni::ref<java::lang::String> key, jni::ref<java::lang::CharSequence> defaultValue) { return call_method<"getCharSequence", jni::ref<java::lang::CharSequence>>(key, defaultValue); }
	jni::ref<android::util::Size> getSize(jni::ref<java::lang::String> key) { return call_method<"getSize", jni::ref<android::util::Size>>(key); }
	jni::ref<android::util::SizeF> getSizeF(jni::ref<java::lang::String> key) { return call_method<"getSizeF", jni::ref<android::util::SizeF>>(key); }
	jni::ref<android::os::Bundle> getBundle(jni::ref<java::lang::String> key) { return call_method<"getBundle", jni::ref<android::os::Bundle>>(key); }
	jni::ref<android::os::Parcelable> getParcelable(jni::ref<java::lang::String> key) { return call_method<"getParcelable", jni::ref<android::os::Parcelable>>(key); }
	jni::ref<jni::array<android::os::Parcelable>> getParcelableArray(jni::ref<java::lang::String> key) { return call_method<"getParcelableArray", jni::ref<jni::array<android::os::Parcelable>>>(key); }
	jni::ref<java::util::ArrayList> getParcelableArrayList(jni::ref<java::lang::String> key) { return call_method<"getParcelableArrayList", jni::ref<java::util::ArrayList>>(key); }
	jni::ref<android::util::SparseArray> getSparseParcelableArray(jni::ref<java::lang::String> key) { return call_method<"getSparseParcelableArray", jni::ref<android::util::SparseArray>>(key); }
	jni::ref<java::io::Serializable> getSerializable(jni::ref<java::lang::String> key) { return call_method<"getSerializable", jni::ref<java::io::Serializable>>(key); }
	jni::ref<java::util::ArrayList> getIntegerArrayList(jni::ref<java::lang::String> key) { return call_method<"getIntegerArrayList", jni::ref<java::util::ArrayList>>(key); }
	jni::ref<java::util::ArrayList> getStringArrayList(jni::ref<java::lang::String> key) { return call_method<"getStringArrayList", jni::ref<java::util::ArrayList>>(key); }
	jni::ref<java::util::ArrayList> getCharSequenceArrayList(jni::ref<java::lang::String> key) { return call_method<"getCharSequenceArrayList", jni::ref<java::util::ArrayList>>(key); }
	jni::ref<jni::array<jbyte>> getByteArray(jni::ref<java::lang::String> key) { return call_method<"getByteArray", jni::ref<jni::array<jbyte>>>(key); }
	jni::ref<jni::array<jshort>> getShortArray(jni::ref<java::lang::String> key) { return call_method<"getShortArray", jni::ref<jni::array<jshort>>>(key); }
	jni::ref<jni::array<jchar>> getCharArray(jni::ref<java::lang::String> key) { return call_method<"getCharArray", jni::ref<jni::array<jchar>>>(key); }
	jni::ref<jni::array<jfloat>> getFloatArray(jni::ref<java::lang::String> key) { return call_method<"getFloatArray", jni::ref<jni::array<jfloat>>>(key); }
	jni::ref<jni::array<java::lang::CharSequence>> getCharSequenceArray(jni::ref<java::lang::String> key) { return call_method<"getCharSequenceArray", jni::ref<jni::array<java::lang::CharSequence>>>(key); }
	jni::ref<android::os::IBinder> getBinder(jni::ref<java::lang::String> key) { return call_method<"getBinder", jni::ref<android::os::IBinder>>(key); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	void readFromParcel(jni::ref<android::os::Parcel> parcel) { return call_method<"readFromParcel", void>(parcel); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Bundle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_BUNDLE
