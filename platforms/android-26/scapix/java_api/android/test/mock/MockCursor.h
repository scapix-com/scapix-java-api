// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/database/Cursor.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKCURSOR_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKCURSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test::mock { class MockCursor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::mock::MockCursor>
{
	static constexpr fixed_string class_name = "android/test/mock/MockCursor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::database::Cursor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKCURSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKCURSOR)
#define SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKCURSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/database/CharArrayBuffer.h>
#include <scapix/java_api/android/database/ContentObserver.h>
#include <scapix/java_api/android/database/DataSetObserver.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::mock::MockCursor : public jni::object_base<"android/test/mock/MockCursor",
	java::lang::Object,
	android::database::Cursor>
{
public:

	static jni::ref<android::test::mock::MockCursor> new_object() { return base_::new_object(); }
	jint getColumnCount() { return call_method<"getColumnCount", jint>(); }
	jint getColumnIndex(jni::ref<java::lang::String> columnName) { return call_method<"getColumnIndex", jint>(columnName); }
	jint getColumnIndexOrThrow(jni::ref<java::lang::String> columnName) { return call_method<"getColumnIndexOrThrow", jint>(columnName); }
	jni::ref<java::lang::String> getColumnName(jint columnIndex) { return call_method<"getColumnName", jni::ref<java::lang::String>>(columnIndex); }
	jni::ref<jni::array<java::lang::String>> getColumnNames() { return call_method<"getColumnNames", jni::ref<jni::array<java::lang::String>>>(); }
	jint getCount() { return call_method<"getCount", jint>(); }
	jboolean isNull(jint columnIndex) { return call_method<"isNull", jboolean>(columnIndex); }
	jint getInt(jint columnIndex) { return call_method<"getInt", jint>(columnIndex); }
	jlong getLong(jint columnIndex) { return call_method<"getLong", jlong>(columnIndex); }
	jshort getShort(jint columnIndex) { return call_method<"getShort", jshort>(columnIndex); }
	jfloat getFloat(jint columnIndex) { return call_method<"getFloat", jfloat>(columnIndex); }
	jdouble getDouble(jint columnIndex) { return call_method<"getDouble", jdouble>(columnIndex); }
	jni::ref<jni::array<jbyte>> getBlob(jint columnIndex) { return call_method<"getBlob", jni::ref<jni::array<jbyte>>>(columnIndex); }
	jni::ref<java::lang::String> getString(jint columnIndex) { return call_method<"getString", jni::ref<java::lang::String>>(columnIndex); }
	void setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", void>(extras); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jint getPosition() { return call_method<"getPosition", jint>(); }
	jboolean isAfterLast() { return call_method<"isAfterLast", jboolean>(); }
	jboolean isBeforeFirst() { return call_method<"isBeforeFirst", jboolean>(); }
	jboolean isFirst() { return call_method<"isFirst", jboolean>(); }
	jboolean isLast() { return call_method<"isLast", jboolean>(); }
	jboolean move(jint offset) { return call_method<"move", jboolean>(offset); }
	jboolean moveToFirst() { return call_method<"moveToFirst", jboolean>(); }
	jboolean moveToLast() { return call_method<"moveToLast", jboolean>(); }
	jboolean moveToNext() { return call_method<"moveToNext", jboolean>(); }
	jboolean moveToPrevious() { return call_method<"moveToPrevious", jboolean>(); }
	jboolean moveToPosition(jint position) { return call_method<"moveToPosition", jboolean>(position); }
	void copyStringToBuffer(jint columnIndex, jni::ref<android::database::CharArrayBuffer> buffer) { return call_method<"copyStringToBuffer", void>(columnIndex, buffer); }
	void deactivate() { return call_method<"deactivate", void>(); }
	void close() { return call_method<"close", void>(); }
	jboolean isClosed() { return call_method<"isClosed", jboolean>(); }
	jboolean requery() { return call_method<"requery", jboolean>(); }
	void registerContentObserver(jni::ref<android::database::ContentObserver> observer) { return call_method<"registerContentObserver", void>(observer); }
	void registerDataSetObserver(jni::ref<android::database::DataSetObserver> observer) { return call_method<"registerDataSetObserver", void>(observer); }
	jni::ref<android::os::Bundle> respond(jni::ref<android::os::Bundle> extras) { return call_method<"respond", jni::ref<android::os::Bundle>>(extras); }
	jboolean getWantsAllOnMoveCalls() { return call_method<"getWantsAllOnMoveCalls", jboolean>(); }
	void setNotificationUri(jni::ref<android::content::ContentResolver> cr, jni::ref<android::net::Uri> uri) { return call_method<"setNotificationUri", void>(cr, uri); }
	jni::ref<android::net::Uri> getNotificationUri() { return call_method<"getNotificationUri", jni::ref<android::net::Uri>>(); }
	void unregisterContentObserver(jni::ref<android::database::ContentObserver> observer) { return call_method<"unregisterContentObserver", void>(observer); }
	void unregisterDataSetObserver(jni::ref<android::database::DataSetObserver> observer) { return call_method<"unregisterDataSetObserver", void>(observer); }
	jint getType(jint columnIndex) { return call_method<"getType", jint>(columnIndex); }

protected:

	MockCursor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKCURSOR