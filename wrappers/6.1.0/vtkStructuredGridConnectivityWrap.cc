/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractGridConnectivityWrap.h"
#include "vtkStructuredGridConnectivityWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkPointDataWrap.h"
#include "vtkCellDataWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridConnectivityWrap::ptpl;

VtkStructuredGridConnectivityWrap::VtkStructuredGridConnectivityWrap()
{ }

VtkStructuredGridConnectivityWrap::VtkStructuredGridConnectivityWrap(vtkSmartPointer<vtkStructuredGridConnectivity> _native)
{ native = _native; }

VtkStructuredGridConnectivityWrap::~VtkStructuredGridConnectivityWrap()
{ }

void VtkStructuredGridConnectivityWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredGridConnectivity").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredGridConnectivity").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredGridConnectivityWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredGridConnectivityWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractGridConnectivityWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractGridConnectivityWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredGridConnectivityWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeNeighbors", ComputeNeighbors);
	Nan::SetPrototypeMethod(tpl, "computeNeighbors", ComputeNeighbors);

	Nan::SetPrototypeMethod(tpl, "CreateGhostLayers", CreateGhostLayers);
	Nan::SetPrototypeMethod(tpl, "createGhostLayers", CreateGhostLayers);

	Nan::SetPrototypeMethod(tpl, "FillGhostArrays", FillGhostArrays);
	Nan::SetPrototypeMethod(tpl, "fillGhostArrays", FillGhostArrays);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataDimension", GetDataDimension);
	Nan::SetPrototypeMethod(tpl, "getDataDimension", GetDataDimension);

	Nan::SetPrototypeMethod(tpl, "GetGhostedGridExtent", GetGhostedGridExtent);
	Nan::SetPrototypeMethod(tpl, "getGhostedGridExtent", GetGhostedGridExtent);

	Nan::SetPrototypeMethod(tpl, "GetGridExtent", GetGridExtent);
	Nan::SetPrototypeMethod(tpl, "getGridExtent", GetGridExtent);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNeighbors", GetNumberOfNeighbors);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNeighbors", GetNumberOfNeighbors);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RegisterGrid", RegisterGrid);
	Nan::SetPrototypeMethod(tpl, "registerGrid", RegisterGrid);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGhostedGridExtent", SetGhostedGridExtent);
	Nan::SetPrototypeMethod(tpl, "setGhostedGridExtent", SetGhostedGridExtent);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

	ptpl.Reset( tpl );
}

void VtkStructuredGridConnectivityWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridConnectivity> native = vtkSmartPointer<vtkStructuredGridConnectivity>::New();
		VtkStructuredGridConnectivityWrap* obj = new VtkStructuredGridConnectivityWrap(native);
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

void VtkStructuredGridConnectivityWrap::ComputeNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNeighbors();
}

void VtkStructuredGridConnectivityWrap::CreateGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CreateGhostLayers(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::FillGhostArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkUnsignedCharArrayWrap *a1 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkUnsignedCharArrayWrap *a2 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FillGhostArrays(
					info[0]->Int32Value(),
					(vtkUnsignedCharArray *) a1->native.GetPointer(),
					(vtkUnsignedCharArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridConnectivityWrap::GetDataDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridConnectivityWrap::GetGhostedGridExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetGhostedGridExtent(
				info[0]->Int32Value(),
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetGhostedGridExtent(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::GetGridExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetGridExtent(
				info[0]->Int32Value(),
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetGridExtent(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::GetNumberOfNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfNeighbors(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
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

void VtkStructuredGridConnectivityWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	vtkStructuredGridConnectivity * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStructuredGridConnectivityWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridConnectivityWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridConnectivityWrap *w = new VtkStructuredGridConnectivityWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridConnectivityWrap::RegisterGrid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkUnsignedCharArrayWrap *a2 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkUnsignedCharArrayWrap *a3 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[4]))
					{
						VtkPointDataWrap *a4 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[5]))
						{
							VtkCellDataWrap *a5 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[6]))
							{
								VtkPointsWrap *a6 = ObjectWrap::Unwrap<VtkPointsWrap>(info[6]->ToObject());
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->RegisterGrid(
									info[0]->Int32Value(),
									(int *)(a1->Buffer()->GetContents().Data()),
									(vtkUnsignedCharArray *) a2->native.GetPointer(),
									(vtkUnsignedCharArray *) a3->native.GetPointer(),
									(vtkPointData *) a4->native.GetPointer(),
									(vtkCellData *) a5->native.GetPointer(),
									(vtkPoints *) a6->native.GetPointer()
								);
								return;
							}
						}
					}
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkUnsignedCharArrayWrap *a2 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkUnsignedCharArrayWrap *a3 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[4]))
					{
						VtkPointDataWrap *a4 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[5]))
						{
							VtkCellDataWrap *a5 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[6]))
							{
								VtkPointsWrap *a6 = ObjectWrap::Unwrap<VtkPointsWrap>(info[6]->ToObject());
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->RegisterGrid(
									info[0]->Int32Value(),
									b1,
									(vtkUnsignedCharArray *) a2->native.GetPointer(),
									(vtkUnsignedCharArray *) a3->native.GetPointer(),
									(vtkPointData *) a4->native.GetPointer(),
									(vtkCellData *) a5->native.GetPointer(),
									(vtkPoints *) a6->native.GetPointer()
								);
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGridConnectivity * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStructuredGridConnectivityWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredGridConnectivityWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridConnectivityWrap *w = new VtkStructuredGridConnectivityWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::SetGhostedGridExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetGhostedGridExtent(
				info[0]->Int32Value(),
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetGhostedGridExtent(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridConnectivityWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridConnectivityWrap>(info.Holder());
	vtkStructuredGridConnectivity *native = (vtkStructuredGridConnectivity *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWholeExtent(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWholeExtent(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetWholeExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

