/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTimerLogWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTimerLogWrap::ptpl;

VtkTimerLogWrap::VtkTimerLogWrap()
{ }

VtkTimerLogWrap::VtkTimerLogWrap(vtkSmartPointer<vtkTimerLog> _native)
{ native = _native; }

VtkTimerLogWrap::~VtkTimerLogWrap()
{ }

void VtkTimerLogWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTimerLog").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TimerLog").ToLocalChecked(), ConstructorGetter);
}

void VtkTimerLogWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTimerLogWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTimerLogWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllocateLog", AllocateLog);
	Nan::SetPrototypeMethod(tpl, "allocateLog", AllocateLog);

	Nan::SetPrototypeMethod(tpl, "CleanupLog", CleanupLog);
	Nan::SetPrototypeMethod(tpl, "cleanupLog", CleanupLog);

	Nan::SetPrototypeMethod(tpl, "DumpLog", DumpLog);
	Nan::SetPrototypeMethod(tpl, "dumpLog", DumpLog);

	Nan::SetPrototypeMethod(tpl, "FormatAndMarkEvent", FormatAndMarkEvent);
	Nan::SetPrototypeMethod(tpl, "formatAndMarkEvent", FormatAndMarkEvent);

	Nan::SetPrototypeMethod(tpl, "GetCPUTime", GetCPUTime);
	Nan::SetPrototypeMethod(tpl, "getCPUTime", GetCPUTime);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetElapsedTime", GetElapsedTime);
	Nan::SetPrototypeMethod(tpl, "getElapsedTime", GetElapsedTime);

	Nan::SetPrototypeMethod(tpl, "GetEventIndent", GetEventIndent);
	Nan::SetPrototypeMethod(tpl, "getEventIndent", GetEventIndent);

	Nan::SetPrototypeMethod(tpl, "GetEventString", GetEventString);
	Nan::SetPrototypeMethod(tpl, "getEventString", GetEventString);

	Nan::SetPrototypeMethod(tpl, "GetEventWallTime", GetEventWallTime);
	Nan::SetPrototypeMethod(tpl, "getEventWallTime", GetEventWallTime);

	Nan::SetPrototypeMethod(tpl, "GetLogging", GetLogging);
	Nan::SetPrototypeMethod(tpl, "getLogging", GetLogging);

	Nan::SetPrototypeMethod(tpl, "GetMaxEntries", GetMaxEntries);
	Nan::SetPrototypeMethod(tpl, "getMaxEntries", GetMaxEntries);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEvents", GetNumberOfEvents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEvents", GetNumberOfEvents);

	Nan::SetPrototypeMethod(tpl, "GetUniversalTime", GetUniversalTime);
	Nan::SetPrototypeMethod(tpl, "getUniversalTime", GetUniversalTime);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LoggingOff", LoggingOff);
	Nan::SetPrototypeMethod(tpl, "loggingOff", LoggingOff);

	Nan::SetPrototypeMethod(tpl, "LoggingOn", LoggingOn);
	Nan::SetPrototypeMethod(tpl, "loggingOn", LoggingOn);

	Nan::SetPrototypeMethod(tpl, "MarkEndEvent", MarkEndEvent);
	Nan::SetPrototypeMethod(tpl, "markEndEvent", MarkEndEvent);

	Nan::SetPrototypeMethod(tpl, "MarkEvent", MarkEvent);
	Nan::SetPrototypeMethod(tpl, "markEvent", MarkEvent);

	Nan::SetPrototypeMethod(tpl, "MarkStartEvent", MarkStartEvent);
	Nan::SetPrototypeMethod(tpl, "markStartEvent", MarkStartEvent);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetLog", ResetLog);
	Nan::SetPrototypeMethod(tpl, "resetLog", ResetLog);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLogging", SetLogging);
	Nan::SetPrototypeMethod(tpl, "setLogging", SetLogging);

	Nan::SetPrototypeMethod(tpl, "SetMaxEntries", SetMaxEntries);
	Nan::SetPrototypeMethod(tpl, "setMaxEntries", SetMaxEntries);

	Nan::SetPrototypeMethod(tpl, "StartTimer", StartTimer);
	Nan::SetPrototypeMethod(tpl, "startTimer", StartTimer);

	Nan::SetPrototypeMethod(tpl, "StopTimer", StopTimer);
	Nan::SetPrototypeMethod(tpl, "stopTimer", StopTimer);

	ptpl.Reset( tpl );
}

void VtkTimerLogWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTimerLog> native = vtkSmartPointer<vtkTimerLog>::New();
		VtkTimerLogWrap* obj = new VtkTimerLogWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTimerLogWrap::AllocateLog(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllocateLog();
}

void VtkTimerLogWrap::CleanupLog(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CleanupLog();
}

void VtkTimerLogWrap::DumpLog(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DumpLog(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::FormatAndMarkEvent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->FormatAndMarkEvent(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::GetCPUTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCPUTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimerLogWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTimerLogWrap::GetElapsedTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElapsedTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimerLogWrap::GetEventIndent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEventIndent(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::GetEventString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEventString(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::GetEventWallTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEventWallTime(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::GetLogging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLogging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimerLogWrap::GetMaxEntries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxEntries();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimerLogWrap::GetNumberOfEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEvents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimerLogWrap::GetUniversalTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUniversalTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimerLogWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::LoggingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LoggingOff();
}

void VtkTimerLogWrap::LoggingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LoggingOn();
}

void VtkTimerLogWrap::MarkEndEvent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->MarkEndEvent(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::MarkEvent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->MarkEvent(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::MarkStartEvent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->MarkStartEvent(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	vtkTimerLog * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTimerLogWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTimerLogWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTimerLogWrap *w = new VtkTimerLogWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTimerLogWrap::ResetLog(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetLog();
}

void VtkTimerLogWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTimerLog * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTimerLogWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTimerLogWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTimerLogWrap *w = new VtkTimerLogWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::SetLogging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLogging(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::SetMaxEntries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxEntries(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimerLogWrap::StartTimer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartTimer();
}

void VtkTimerLogWrap::StopTimer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimerLogWrap *wrapper = ObjectWrap::Unwrap<VtkTimerLogWrap>(info.Holder());
	vtkTimerLog *native = (vtkTimerLog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StopTimer();
}
